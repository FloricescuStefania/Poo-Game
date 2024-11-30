#include <string>
#include <iostream>
using namespace std;
#include "round1.h"
#include "suspect.h"
#include "game.h"

Game game;

void Round1::begin() {

    cout << "Who do you want to interrogate?Please enter the name:" << endl;
    cout << "John" << endl;
    cout << "Bob" << endl;
    cout << "Paul" << endl;

    cin.ignore();
    getline(cin, suspectName);

    if (suspectName == "Bob" || suspectName == "bob")
        cout << "\nYou choose Bob" << endl;
    else if (suspectName == "John" || suspectName == "john")
        cout << "\nYou choose John" << endl;
    else if (suspectName == "Paul" || suspectName == "paul")
        cout << "\nYou choose Paul" << endl;
    else{
        cout << "Invalid name!Returning to the main menu...\n" << endl;
       game.start();
}
    
}

void Round1::interrogate()
{
    
    begin();
   
    cout << "What do you want to ask "<< suspectName<< " " << "first ? (1 - 3)" << endl;
    cout << "1.Where were you at the time of the crime?" << endl;
    cout << "2.Did you speak to the victim on the day of the murder?" << endl;
    cout << "3.Did you have a close relationship with the victim?" << endl;
    int question;
    cin >> question;

    switch (question)
    {
    case 1:
        if (suspectName == "Paul" || suspectName == "paul")
            cout << "I was home all night, watching a movie. You can check the security cameras in my building." << endl;
        else if (suspectName == "John" || suspectName == "john")
            cout << "I was out with some friends. I think I was somewhere around town." << endl;
        else if (suspectName == "Bob" || suspectName == "bob")
            cout << "I was at an important meeting... I didn’t have time to think about anything else." << endl;
        trySomethingElse();
        break;

    case 2:
        if (suspectName == "Paul" || suspectName == "paul")
            cout << "I sent a quick message, but didn’t get a reply. It wasn’t anything serious." << endl;
        else if (suspectName == "John" || suspectName == "john")
            cout << "No, I hadn’t spoken with Nicholas in a few weeks." << endl;
        else if (suspectName == "Bob" || suspectName == "bob")
            cout << "No, I was actually surprised to hear he was in town that day." << endl;
        trySomethingElse();
        break;

    case 3:
        if (suspectName == "Paul" || suspectName == "paul")
            cout << "He was my neighbor. I still can’t believe this happened." << endl;
        else if (suspectName == "John" || suspectName == "john")
            cout << "Not really. We only met a few times through mutual friends." << endl;
        else if (suspectName == "Bob" || suspectName == "bob")
            cout << "We got along well at work, but we didn’t really talk outside of that." << endl;
        trySomethingElse();
        break;

    default:
        cout << "Invalid choice." << endl;
        break;
    }
}

void Round1::trySomethingElse() {
    cout << "What do you want to do now?(1-2)" << endl;
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
    