#pragma once

#include <vector>

#include "grocery.pb.h"

class Writer {
private:
    std::vector<grocery::Item> buffer_;
    std::string file_path_;

public:
    Writer(std::string file_path);

    void insert(grocery::Item item);
    void flush();
};