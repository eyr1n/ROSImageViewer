package jp.eyrin.rosimageviewer

import android.graphics.Bitmap
import android.graphics.BitmapFactory
import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.Image
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.asImageBitmap
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.unit.dp
import jp.eyrin.rclmodoki.Node
import jp.eyrin.rclmodoki.QoS
import jp.eyrin.rclmodoki.Subscription
import jp.eyrin.rosimageviewer.ui.theme.ROSImageViewerTheme
import kotlinx.coroutines.flow.MutableStateFlow

class MainActivity : ComponentActivity() {
    companion object {
        init {
            System.loadLibrary("rosimageviewer")
        }
    }

    private lateinit var node: Node
    private lateinit var objectDetectorSub: Subscription<CompressedImageMsg>
    private lateinit var gestureRecognizerSub: Subscription<CompressedImageMsg>
    private val objectDetectorImage =
        MutableStateFlow(Bitmap.createBitmap(320, 240, Bitmap.Config.ARGB_8888))
    private val gestureRecognizerImage =
        MutableStateFlow(Bitmap.createBitmap(320, 240, Bitmap.Config.ARGB_8888))

    override fun onResume() {
        super.onResume()
        node = Node(domainId = 3)
        objectDetectorSub = node.createSubscription("/object_detector/image/compressed", QoS(10)) {
            objectDetectorImage.value = BitmapFactory.decodeByteArray(it.data, 0, it.data.size)
        }
        gestureRecognizerSub =
            node.createSubscription("/gesture_recognizer/image/compressed", QoS(10)) {
                gestureRecognizerImage.value =
                    BitmapFactory.decodeByteArray(it.data, 0, it.data.size)
            }
    }

    override fun onPause() {
        super.onPause()
        node.shutdown()
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            val objectDetectorImage by objectDetectorImage.collectAsState()
            val gestureRecognizerImage by gestureRecognizerImage.collectAsState()

            ROSImageViewerTheme {
                Surface(
                    modifier = Modifier.fillMaxSize(),
                    color = MaterialTheme.colorScheme.background,
                ) {
                    Column(verticalArrangement = Arrangement.spacedBy(10.dp)) {
                        Column {
                            Text("/object_detector/image/compressed")
                            Image(
                                modifier = Modifier.fillMaxWidth(),
                                bitmap = objectDetectorImage.asImageBitmap(),
                                contentDescription = null,
                                contentScale = ContentScale.Crop,
                            )
                        }
                        Column {
                            Text("/gesture_recognizer/image/compressed")
                            Image(
                                modifier = Modifier.fillMaxWidth(),
                                bitmap = gestureRecognizerImage.asImageBitmap(),
                                contentDescription = null,
                                contentScale = ContentScale.Crop,
                            )
                        }
                    }
                }
            }
        }
    }
}