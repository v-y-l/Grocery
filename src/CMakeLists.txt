add_executable(Grocery main.cpp)

target_link_libraries(Grocery PRIVATE httplib proto)
