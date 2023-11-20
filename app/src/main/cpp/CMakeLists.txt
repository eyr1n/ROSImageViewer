cmake_minimum_required(VERSION 3.22.1)
project("rosimageviewer")

set(CMAKE_CXX_STANDARD 17)

find_package(rclmodoki REQUIRED)
add_subdirectory(msg)

add_library(${PROJECT_NAME} SHARED
        rclmodoki.cpp
        rosimageviewer.cpp)
target_link_libraries(${PROJECT_NAME}
        android
        log
        rclmodoki::rclmodoki
        msg)