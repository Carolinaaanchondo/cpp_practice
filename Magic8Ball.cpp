//Magic 8 Ball Cpp
//Carolina Anchondo
//COSC 1436-016 Tuesdays @ 6pm
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    //Array
    string answers[8] = {
        "Not on your life",
        "That's gonna be a NO from me",
        "Absolutely!",
        "Murky, the future is",
        "A resounding YES",
        "I have no idea you should phone a friend",
        "Sounds OK to me",
        "I sincerely doubt it"
    };

    //Seed the random number
    srand(time(0));

    char playAgain = 'y';
    string question;

    while (playAgain == 'y' || playAgain == 'Y') {
        cout << "What is your question for the all knowing Magic 8 ball?" << endl;
        getline(cin, question);
        if (question.length() == 0) {
            getline(cin, question);
        }

        //Get answer from array
        int index = rand() % 8;
        cout << "Magic 8 ball says..." << endl;
        cout << answers[index] << endl;
        cout << "Would you like to know the future again? y/n: ";
        cin >> playAgain;

        //Clear remaining characters (just using cin.ignore() by itself was making my code glitch)
        cin.ignore(1000, '\n');
    }

    return 0;
}
