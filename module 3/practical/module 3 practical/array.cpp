#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt user for the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    // Declare an array of size 'n'
    int arr[n];
    int sum = 0;

    // Input elements into the array
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    // Calculate the average
    double average = static_cast<double>(sum) / n;

    // Display the results
    cout << "\nSum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
