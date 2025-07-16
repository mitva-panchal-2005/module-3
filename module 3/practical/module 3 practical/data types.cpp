#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variables (mutable)
    int age = 21;
    double salary = 45000.50;
    char grade = 'A';
    string name = "nilam";

    cout << "Name: " << name << ", Age: " << age 
         << ", Salary: $" << salary << ", Grade: " << grade << "\n";

    // Modify variables
    age += 1;               // Alice had a birthday
    salary *= 1.10;         // 10% raise
    grade = 'A';            // stays same!

    // Constants (immutable)
    const double PI = 3.14159;
    constexpr int MAX_USERS = 100;

    cout << "After update — Age: " << age << ", Salary: $" << salary << "\n";
    cout << "Constants: PI = " << PI << ", MAX_USERS = " << MAX_USERS << "\n";

    // Show using constants in a calculation
    double circleArea = PI * 5 * 5;
    cout << "Area of circle with radius 5 = " << circleArea << "\n";

    return 0;
}
