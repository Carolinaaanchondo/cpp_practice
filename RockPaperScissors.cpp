//This code is written by Prof Clark
//You must use all of my code as written and
//do not alter it. Use the comments below
//main to determine what your functions need
//to do. Look for the TODO words within this file.
//TODO: Carolina Anchondo
//TODO: COSC 1436-016
//Lab 6a: Rock Paper Scissors
//This program plays Rock, Paper, Scissors with the user

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

// Function prototypes
int getComputerChoice();
void printMenu();
int chooseWinner(int, int);
string displayWordChoice(int);

int main()
{
    srand(time(0));
    int computerChoice, playerChoice, winningPlayer;
    char playAgain;
    do{
        computerChoice = getComputerChoice();
        printMenu();
        cout << "What do you choose? ";
        cin >> playerChoice;
        while (playerChoice < 1 || playerChoice > 3)
        {
            cout << "That was not a valid choice. Try again." << endl;
            printMenu();
            cout << "What do you choose? ";
            cin >> playerChoice;
        }
        cout << endl << "You chose: " << displayWordChoice(playerChoice) <<
endl;
        cout << "Computer chose: " << displayWordChoice(computerChoice) <<
endl;
        winningPlayer = chooseWinner(playerChoice, computerChoice);
        if (winningPlayer == 1)
            cout << "*** You win! ***" << endl;
        else if (winningPlayer == 2)
            cout << "*** Computer Wins! ***" << endl;
        else
            cout << "*** It's a tie! ***" << endl;
        cout << endl << "Want to play again? (y/n): ";
        cin.ignore();
        cin.get(playAgain);
    } while (playAgain == 'Y' || playAgain == 'y');
    return 0;
}

//getComputerChoice returns a random number 1-3 symbolizing the
//computer choosing rock, paper, or scissors (in that order)
//TODO: write function
int getComputerChoice() {
    return rand() % 3 + 1;
}

//printMenu prints a menu of options for the user. Choices are 1-3
//symbolizing choosing rock, paper, or scissors (in that order)
//TODO: write function
void printMenu() {
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
}

//chooseWinner returns a 1 if the user wins, 2 if the Computer wins,
//or 3 if it is a tie.
//To determine a winner:
//rock beats scissors
//paper beats rock
//scissors beats paper
//TODO: write function
int chooseWinner(int player, int computer) {
    if (player == computer) {
        return 3; 
    }
    if (player == 1 && computer == 3) return 1;
    if (computer == 1 && player == 3) return 2;
    if (player == 2 && computer == 1) return 1;
    if (computer == 2 && player == 1) return 2;
    if (player == 3 && computer == 2) return 1;
    if (computer == 3 && player == 2) return 2;
    return 3;
}

//displayWordChoice returns a string with the word Rock, Paper, or Scissors
//based upon the numeric choice passed into the function (1 = Rock, 2 = Paper,
//3 = Scissors)
//TODO: write function
string displayWordChoice(int choice) {
    if (choice == 1) return "Rock";
    else if (choice == 2) return "Paper";
    else return "Scissors";
}