find_package(protobuf CONFIG REQUIRED)

include_directories(${Protobuf_INCLUDE_DIRS})

add_executable(Grocery main.cpp writer.cpp)

target_link_libraries(Grocery PUBLIC httplib proto-objects)