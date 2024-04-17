find_package(protobuf CONFIG REQUIRED)

include_directories(${protobuf_INCLUDE_DIR})

add_executable(Grocery main.cpp writer.cpp)

target_link_libraries(Grocery PRIVATE httplib proto-objects)