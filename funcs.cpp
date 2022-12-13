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

int sumRange(int left, int right) {
    if (left > right) {
        return 0;
    }
    int sum = 0;
    if (left != right) {
        if (left + 1 == right) {
            sum += left+1;
        }
        sum += left + sumRange(left+1, right);
    }
    return sum;
}

int sumArray(int *arr, int size) {
    size -= 1;
    int sum = 0;
    if (size > 0) {
        if (size == 1) {
            sum += arr[size-1];
        }
        sum += arr[size] + sumArray(arr, size);
    }
    return sum;
}

bool isAlphanumeric(std::string s) {
    bool charAlphaNum = isalnum(s[0]);
    if (charAlphaNum && s.length() == 1) {
        return true;
    } else if (charAlphaNum && s.length() > 1) {
        return true && isAlphanumeric(s.substr(1));
    }
    return false;
}
