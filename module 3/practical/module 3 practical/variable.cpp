#include <iostream>
using namespace std;

// Global variable
int globalVar = 100;

void displayVariables() {
    // Local variable with the same name as the global variable
    int globalVar = 200;
    cout << "Inside function displayVariables:\n";
    cout << "Local globalVar: " << globalVar << endl;
    cout << "Global globalVar: " << ::globalVar << endl; // Accessing global variable using scope resolution operator
}

int main() {
    cout << "Inside main function:\n";
    cout << "Global globalVar: " << globalVar << endl;

    displayVariables();

    return 0;
}
