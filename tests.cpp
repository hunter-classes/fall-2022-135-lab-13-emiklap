#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "funcs.h"
#include "doctest.h"

TEST_CASE("Task A: printRange()") {
    CHECK(printRange(-2, 10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10 ");
    CHECK(printRange(-12, -1) == "-12 -11 -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 ");
    CHECK(printRange(0, 0) == "0 ");
    CHECK(printRange(10, 1) == "");
}

TEST_CASE("Task B: sumRange()") {
    CHECK(sumRange(-2, 10) == 52);
    CHECK(sumRange(1, 3) == 6);
    CHECK(sumRange(0, 0) == 0);
    CHECK(sumRange(10, -2) == 0);
}

TEST_CASE("Task C: sumArray()") {
    int size = 5;
    int array[5] = {3, 5, -3, 2, 13};
    int *arr = array;
    CHECK(sumArray(arr, size) == 20);
    CHECK(sumArray(arr, 4) == 7);
    CHECK(sumArray(arr, 0) == 0);
}
