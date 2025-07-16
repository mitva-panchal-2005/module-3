#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter student's marks (0-100): ";
    cin >> marks;

    char grade;

    if (marks >= 90 && marks <= 100) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 60) {
        grade = 'C';
    } else if (marks >= 33) {
        grade = 'D';
    } else if (marks >= 0) {
        grade = 'F';
    } else {
        cout << "Invalid marks entered!\n";
        return 1;
    }

    cout << "Your grade is: " << grade << "\n";
    return 0;
}
