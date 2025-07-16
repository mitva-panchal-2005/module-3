#include <iostream>
#include <stdexcept>
using namespace std;

// Calculator class definition
class Calculator {
public:
    // Addition
    double add(double a, double b) {
        return a + b;
    }

    // Subtraction
    double subtract(double a, double b) {
        return a - b;
    }

    // Multiplication
    double multiply(double a, double b) {
        return a * b;
    }

    // Division (with basic error check)
    double divide(double a, double b) {
        if (b == 0) {
            throw runtime_error("Error: Division by zero!");
        }
        return a / b;
    }
};

int main() {
    Calculator calc;  // Create a Calculator object

    double x = 10.5;
    double y = 2.0;

    cout << "x = " << x << ", y = " << y << "\n";

    cout << "Addition: " << calc.add(x, y) << "\n";
    cout << "Subtraction: " << calc.subtract(x, y) << "\n";
    cout << "Multiplication: " << calc.multiply(x, y) << "\n";

    try {
        cout << "Division: " << calc.divide(x, y) << "\n";
    } catch (const exception& e) {
        cerr << e.what() << "\n";
    }

    // Example of dividing by zero
    try {
        cout << "Division by zero example: " << calc.divide(x, 0) << "\n";
    } catch (const exception& e) {
        cerr << e.what() << "\n";
    }

    return 0;
}
