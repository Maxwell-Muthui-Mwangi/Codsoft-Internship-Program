#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    
    int guess;
    int attempts = 0;

    cout << "Welcome to Guess the Number Game!" << endl;
    cout << "I have selected a random number between 1 and 100. Try to guess it!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try guessing higher." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try guessing lower." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << secretNumber << " correctly in " << attempts << " attempts." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}
