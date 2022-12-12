#include <iostream>

std::string printRange(int left, int right) {
    if (left > right) {
        return "";
    }
    std::string ret_str = std::__cxx11::to_string(left) + " ";
    if (left != right) {
        ret_str += printRange(left+1, right);
    }
    return ret_str;
}
