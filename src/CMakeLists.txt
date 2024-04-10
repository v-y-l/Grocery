add_executable(Grocery main.cpp writer.cpp)

target_link_libraries(Grocery PRIVATE httplib proto-objects)