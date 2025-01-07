#include <iostream>
#include <fstream>
using namespace std;
#include "interrogate.h"
#include "game.h"
#include "filehandler.h"

FileHandler file;
Game trygame;

//method for selecting and displaying suspects
void Interrogate::begin() {

    cout << "\nWho do you want to interrogate?(1-3):\n" << endl;
    file.suspectsInfo();

    int person;
    cin >> person;

    switch (person) {
    case 1: cout << "You chose John" << endl; selectedSuspectFile = "suspect1-responses.txt"; break;
    case 2: cout << "You chose Bob" << endl; selectedSuspectFile = "suspect2-responses.txt";  break;
    case 3: cout << "You chose Paul" << endl; selectedSuspectFile = "suspect3-responses.txt";  break;
    default:cout << "Invalid choice!Try again...\n" << endl;  break;
    }
}

//method for selecting suspects for interrogation
void Interrogate::interrogate()
{
    begin();

    cout << "\nWhat do you want to ask? (1-3):\n" << endl;
    file.questionFile();

    int question;
    cin >> question;

    switch (question) {
    case 1:
        file.getSuspectResponse(selectedSuspectFile, question);  // Question 1
        trySomethingElse();
        break;
    case 2:
        file.getSuspectResponse(selectedSuspectFile, question);  // Question 2
        trySomethingElse();
        break;
    case 3:
        file.getSuspectResponse(selectedSuspectFile, question);  // Question 3 
        trySomethingElse();
        break;
    default:
        cout << "Invalid choice!Please try again:" << endl;
        interrogate();
        break;
    }
    
}

//method for choosing to do something else
void Interrogate::trySomethingElse() {
    cout << "\nWhat do you want to do now?(1-2):\n" << endl;
    cout << "1.Ask something else" << endl;
    cout << "2.Return to the main menu" << endl;

    int another;
    cin >> another;

    switch (another) {
    case 1:
        interrogate();    //interrogate another suspect
        break;
    case 2:
        trygame.start();  //go to the start
        break;
    default:
        cout << "Invalid choice.Try again:\n" << endl;
        trySomethingElse();
        break;
    }
}
