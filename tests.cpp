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
