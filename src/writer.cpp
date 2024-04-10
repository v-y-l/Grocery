#include <iostream>

#include "writer.hpp"
#include "grocery.pb.h"

Writer::Writer(std::string file_path) : file_path_(std::move(file_path)){};

void Writer::insert(grocery::Item item) {
    buffer_.push_back(std::move(item));
};

void Writer::flush() {
    for (auto &item : buffer_) {
        std::cout << item.name() << std::endl;
    }
};