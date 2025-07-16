#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    bool flag1 = true, flag2 = false;

    // Arithmetic operators
    cout << "Arithmetic:\n";
    cout << "a + b = " << (a + b) << "\n";
    cout << "a - b = " << (a - b) << "\n";
    cout << "a * b = " << (a * b) << "\n";
    cout << "a / b = " << (a / b) << "\n";
    cout << "a % b = " << (a % b) << "\n";  // remainder

    //  Relational operators
    cout << "\nRelational (true prints as 1, false as 0):\n";
    cout << "a == b: " << (a == b) << "\n";
    cout << "a != b: " << (a != b) << "\n";
    cout << "a > b: " << (a > b) << "\n";
    cout << "a < b: " << (a < b) << "\n";
    cout << "a >= b: " << (a >= b) << "\n";
    cout << "a <= b: " << (a <= b) << "\n";

    //  Logical operators
    cout << "\nLogical:\n";
    cout << "flag1 && flag2: " << (flag1 && flag2) << "\n";
    cout << "flag1 || flag2: " << (flag1 || flag2) << "\n";
    cout << "!flag1: " << (!flag1) << "\n";

    //  Bitwise operators
    cout << "\nBitwise (operating on integer bits):\n";
    cout << "a & b: " << (a & b) << "\n";   // bitwise AND
    cout << "a | b: " << (a | b) << "\n";   // bitwise OR
    cout << "a ^ b: " << (a ^ b) << "\n";   // bitwise XOR
    cout << "~a: " << (~a) << "\n";         // bitwise NOT
    cout << "a << 1: " << (a << 1) << "\n"; // left shift
    cout << "a >> 1: " << (a >> 1) << "\n"; // right shift

    return 0;
}
