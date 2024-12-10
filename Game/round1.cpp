#include <string>
#include <iostream>
#include <fstream>
using namespace std;
#include "round1.h"
#include "suspect.h"
#include "game.h"
#include "filehandler.h"

Game game;
FileHandler fileinfo;

void Round1::begin() {

    cout << "\nWho do you want to interrogate?(1-3):\n" << endl;
    fileinfo.suspects_info();

    int person;
    cin >> person;

        switch (person) {
           case 1: cout << "You chose John" << endl; selectedSuspectFile = "suspect1-responses.txt"; break;
           case 2: cout << "You chose Bob" << endl; selectedSuspectFile = "suspect2-responses.txt";  break;
           case 3: cout << "You chose Paul" << endl; selectedSuspectFile = "suspect3-responses.txt";  break;
           default:
        cout << "Invalid name!Returning to the main menu...\n" << endl;
       game.start();
       break;
}
    
}

void Round1::interrogate()
{
    begin();

    cout << "\nWhat do you want to ask? (1-3):\n" << endl;
    fileinfo.questionFile();

    int question;
    cin >> question;

    switch (question) {
    case 1:
        fileinfo.getSuspectResponse(selectedSuspectFile, 1);  // Question 1
        trySomethingElse();
        break;
    case 2:
        fileinfo.getSuspectResponse(selectedSuspectFile, 2);  // Question 2
        trySomethingElse();
        break;
    case 3:
        fileinfo.getSuspectResponse(selectedSuspectFile, 3);  // Question 3
        trySomethingElse();
        break;
    default:
        cout << "Invalid choice!" << endl;
        break;
    }
}

void Round1::trySomethingElse() {
    cout << "\nWhat do you want to do now?(1-2):\n" << endl;
    cout << "1.Ask something else" << endl;
    cout << "2.Return to main menu" << endl;
  /*cout << "3.Leave the game" << endl;
    cout << "4.Take a guess about the suspect" << endl;*/
    int another;
    cin >> another;

    switch (another) {
    case 1:
        interrogate();
        break;
    case 2:
        game.start();
        break;
    default:
        cout << "Invalid choice\n" << endl;
        break;
    }
}

void Round1::riskyChoice() {
        int riskyChoice;
        cout << "Do you want to take a risky action? (1 for yes, 2 for no): ";
        cin >> riskyChoice;

        if (riskyChoice == 1) {
            cout << "You are so brave!You decide to confront the suspect directly.";
            cout<< "But now you scared the suspect and he gets defensive and refuses to talk more. " << endl;
            //TO DO- scade scorul si iese din joc
           
        }
        else if (riskyChoice == 2) {
            cout << "A wise choice!You choose to gather more information before making accusations.\n";
            //TO DO- creste scorul si continua jocul
        }
        else {
            cout << "Invalid choice.\n";
            
        }

    }
    