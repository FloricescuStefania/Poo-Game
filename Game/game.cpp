#include <string>
#include <iostream>
using namespace std;
#include "suspect.h"
#include "game.h"
#include "round1.h"
#include "round2.h"

Round1 round1;
Suspect suspect;

void Game::start() {
        running = true;

        while (running) {
            int choice;
            cout << "What would you like to do first?(1-3) " << endl;
            cout << "1. View suspect information." << endl;
            cout << "2. Interrogate the suspects." << endl;
            cout << "3. Take a risky choice " << endl;
            cout << "4. Inspect the house" << endl;
            cout << "5. Exit game" << endl;
            cin >> choice;

            switch (choice) {
            case 1: suspect.suspectInfo(); break;
            case 2: round1.interrogate(); break;
            case 3: round1.riskyChoice(); break;
            case 4:  break;
            default: cout << "Invalid choice.\n"; break;
            }
        }
}

bool Game::continueGame() {
    char choice;
    cout << "Do you want to continue? (y/n): ";
    cin >> choice;

    return choice == 'y' || choice == 'Y';
}

bool Game::guess()
{
    int murderer;
    cin >> murderer;
    cout << "Chose the susoect you think is the murderer.(1-Bob,2-Paul,3-John)" << endl;
    if (murderer == 1)
        return false;
    else if (murderer == 2)
        return false;
    else
        return true;
    cout << "Congratulations!You found the murderer!" << endl;
    return true;
}