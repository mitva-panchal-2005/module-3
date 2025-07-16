#include <iostream>
using namespace std;

// Function to calculate factorial using recursion
long long factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1)
        return 1;
    // Recursive case: n * factorial of (n-1)
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    // Prompt user for input
    cout << "Enter a positive integer: ";
    cin >> num;

    // Validate input
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers.\n";
    } else {
        // Calculate and display factorial
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    }

    return 0;
}
