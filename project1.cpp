
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Get user's choice
    string userChoice;
    cout << "Enter your choice (rock, paper, or scissors): ";
    cin >> userChoice;

    // Generate computer's choice randomly
    int computerChoice = rand() % 3;
    string computerChoices[] = {"rock", "paper", "scissors"};
    string computerSelection = computerChoices[computerChoice];

    cout << "Computer chose: " << computerSelection << endl;

    // Determine the winner
    if (userChoice == computerSelection) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == "rock" && computerSelection == "scissors") ||
               (userChoice == "paper" && computerSelection == "rock") ||
               (userChoice == "scissors" && computerSelection == "paper")) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }

    return 0;
}
