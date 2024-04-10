#include "writer.hpp"
#include "grocery.pb.h"
#include <iostream>

void Writer::writeRecord() {
    grocery::Item i;
    i.set_name("item");
    std::cout << i.name() << std::endl;
}