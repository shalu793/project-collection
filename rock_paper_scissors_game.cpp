//rock-paper-scissors game
#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    string userChoice;
    string computerChoice;
    string choices[3] = {"rock", "paper", "scissors"};

    // Seed the random number generator
    srand(time(0));

    cout << "Welcome to Rock, Paper, Scissors Game!\n";

    while (true) {
        // User Input
        cout << "\nEnter your choice (rock, paper, scissors or quit to exit): ";
        cin >> userChoice;

        // To exit game
        if (userChoice == "quit") {
            cout << "Thanks for playing!\n";
            break;
        }

        // Generate computer choice
        int randIndex = rand() % 3;
        computerChoice = choices[randIndex];

        // Display computer choice
        cout << "Computer chose: " << computerChoice << "\n";

        // Determine winner
        if (userChoice == computerChoice) {
            cout << "It's a tie!\n";
        }
        else if ((userChoice == "rock" && computerChoice == "scissors") ||
                 (userChoice == "paper" && computerChoice == "rock") ||
                 (userChoice == "scissors" && computerChoice == "paper")) {
            cout << "You win!\n";
        }
        else if ((userChoice == "rock") || (userChoice == "paper") || (userChoice == "scissors")) {
            cout << "You lose!\n";
        }
        else {
            cout << "Invalid choice! Please enter rock, paper, scissors, or quit.\n";
        }
    }

    return 0;
}
