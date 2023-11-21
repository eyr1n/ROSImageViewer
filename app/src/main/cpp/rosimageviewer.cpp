#include <rclmodoki/rclmodoki.hpp>

#include "sensor_msgs/msg/CompressedImagePubSubTypes.h"

using namespace rclmodoki;

MessageTypes message_types{
        {
                "jp/eyrin/rosimageviewer/CompressedImageMsg",
                MessageType(
                        new sensor_msgs::msg::CompressedImagePubSubType,
                        [](MessageKt &&) { return new sensor_msgs::msg::CompressedImage; },
                        [](MessageCpp &&msg) {
                            auto &msg_ = msg.get_message<sensor_msgs::msg::CompressedImage>();
                            jbyteArray data = msg.get_env()->NewByteArray(msg_.data().size());
                            msg.get_env()->SetByteArrayRegion(
                                    data, 0, msg_.data().size(),
                                    reinterpret_cast<const jbyte *>(msg_.data().data()));
                            return msg.new_object(data);
                        }),
        },
};

extern "C" JNIEXPORT jint JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv *env;
    if (vm->GetEnv(reinterpret_cast<void **>(&env), JNI_VERSION_1_6) != JNI_OK) {
        return JNI_ERR;
    }
    rclmodoki::rclmodoki_init(env, message_types);
    return JNI_VERSION_1_6;
}
