#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));                      // Seed RNG with current time
    int secret = rand() % 100 + 1;       // Secret number in [1, 100]
    int guess = 0;
    int attempts = 0;

    cout << "I'm thinking of a number between 1 and 100.\n";

    // Loop until the user guesses correctly
    while (guess != secret) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secret) {
            cout << "Too high! Try again.\n";
        } else if (guess < secret) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Correct! You guessed it in " << attempts << " tries.\n";
        }
    }

    return 0;
}
