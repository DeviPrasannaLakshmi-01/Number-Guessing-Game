#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess;

    srand(time(0));
    number = rand() % 100 + 1;

    cout << "===== NUMBER GUESSING GAME =====\n";
    cout << "I have chosen a number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > number) {
            cout << "Too High! Try again.\n";
        }
        else if (guess < number) {
            cout << "Too Low! Try again.\n";
        }
        else {
            cout << "Correct! You guessed the number!\n";
        }

    } while (guess != number);

    return 0;
}