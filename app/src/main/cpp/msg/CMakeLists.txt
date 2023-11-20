find_package(fastdds-prefab)
file(GLOB_RECURSE MSG_SOURCES "*.cxx")
add_library(msg STATIC ${MSG_SOURCES})
target_include_directories(msg PUBLIC .)
target_link_libraries(msg
        fastdds-prefab::fastcdr
        fastdds-prefab::fastrtps)