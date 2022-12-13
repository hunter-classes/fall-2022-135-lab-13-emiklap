#include <iostream>
#include "funcs.h"

int main() {
    std::cout << "  <-- Task A --> \n";
    std::cout << "printRange(-2, 10): " << printRange(-2, 10) << "\n";
    std::cout << "printRange(10, -15): " << printRange(10, -15) << "\n";

    std::cout << "\n  <-- Task B --> \n";
    std::cout << "sumRange(1, 3): " << sumRange(1, 3) << "\n";
    std::cout << "sumRange(10, 10): " << sumRange(10, 10) << "\n";

    std::cout << "\n  <-- Task C --> \n";
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size); // Add all elements
    std::cout <<  "sumArray(arr, size): " << sum1 << std::endl;  // Sum is 43

    int sum2 = sumArray(arr, 5); // Add up first five elements
    std::cout << "sumArray(arr, 5): " << sum2 << std::endl;  // Sum is 34

    std::cout << "\n  <-- Task D --> \n";
    std::cout << "isAlphanumeric(\"jsfh2kj3\"): " << isAlphanumeric("jsfh2kj3") << "\n";
    std::cout << "isAlphanumeric(\"#H&K(H K#J*H-B#LW $GPO\"): " << isAlphanumeric("#H&K(H K#J*H-B#LW $GPO") << "\n";

    std::cout << "\n  <-- Task E --> \n";
    std::cout << "nestedParens(\"(())\"): " << nestedParens("(())") << "\n";
    std::cout << "nestedParens(\"((B))\"): " << nestedParens("((B))") << "\n" ;
}
