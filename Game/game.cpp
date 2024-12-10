#include <string>
#include <iostream>
using namespace std;
#include "suspect.h"
#include "game.h"
#include "round1.h"
#include "inspecthouse.h"
#include "filehandler.h"

Round1 round1;
InspectHouse inspecthouse;
FileHandler filehandler;

void Game::start() {
        running = true;

        while (running) {
            int choice;
            cout << "\nWhat would you like to do first?(1-6) " << endl;
            cout << "1. View suspect information." << endl;
            cout << "2. View suspect behaviour" << endl;
            cout << "3. Interrogate the suspects." << endl;
            cout << "4. Take a risky choice " << endl;
            cout << "5. Inspect the house" << endl;
            cout << "6. Exit game" << endl;
            cin >> choice;

            switch (choice) {
            case 1: filehandler.suspects_info(); 
                cout << "\nA good choice.You need to know information about the suspects in this case." << endl; break;
            case 2: filehandler.suspectBehaviour(); 
                cout << "\nVery good. This may help you find the murderer." << endl; break;
            case 3: round1.interrogate(); break;
            case 4: round1.riskyChoice(); break;
            case 5: inspecthouse.choseRoom();  break;
            case 6: break;//TO DO-method to exit the game
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
    cout << "Chose the suspect you think is the murderer.(1-3)" << endl;
    if (murderer == 1)
        return false;
    else if (murderer == 2)
        return false;
    else
        return true;
    cout << "Congratulations!You found the murderer!" << endl;
    return true;
}