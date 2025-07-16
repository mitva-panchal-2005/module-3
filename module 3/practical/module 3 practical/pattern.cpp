#include <iostream>
using namespace std;

int main() {
    int rows;

    // Prompt user for the number of rows
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        // Inner loop to print stars in each row
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
