#include <string>
#include <iostream>
using namespace std;
#include "round1.h"
#include "suspect.h"


void Round1::begin() {

    cout << "Who do you want to interrogate?" << endl;
    cout << "John" << endl;
    cout << "Bob" << endl;
    cout << "Paul" << endl;

    cin.ignore();
    getline(cin,suspectName);
    
    if (suspectName == "Bob" || suspectName=="bob")
        cout << "\nYou choose Bob" << endl;
    else if (suspectName == "John" || suspectName == "john")
        cout << "\nYou choose John" << endl;
    else if (suspectName == "Paul" || suspectName == "paul")
        cout << "\nYou choose Paul" << endl;
    else
        cout << "Invalid name!" << endl;
     //TO DO daca este ivalid name atunci sa iasa din joc sau sa mearga in meniul principal
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
        break;

    case 2:
        if (suspectName == "Paul" || suspectName == "paul")
            cout << "I sent a quick message, but didn’t get a reply. It wasn’t anything serious." << endl;
        else if (suspectName == "John" || suspectName == "john")
            cout << "No, I hadn’t spoken with Nicholas in a few weeks." << endl;
        else if (suspectName == "Bob" || suspectName == "bob")
            cout << "No, I was actually surprised to hear he was in town that day." << endl;
        break;

    case 3:
        if (suspectName == "Paul" || suspectName == "paul")
            cout << "He was my neighbor. I still can’t believe this happened." << endl;
        else if (suspectName == "John" || suspectName == "john")
            cout << "Not really. We only met a few times through mutual friends." << endl;
        else if (suspectName == "Bob" || suspectName == "bob")
            cout << "We got along well at work, but we didn’t really talk outside of that." << endl;
        break;

    default:
        cout << "Invalid choice." << endl;
        break;
    }
}

void Round1::riskyChoice() {
        int riskyChoice;
        cout << "Do you want to take a risky action? (1 for yes, 2 for no): ";
        cin >> riskyChoice;

        if (riskyChoice == 1) {
            cout << "You decide to confront the suspect directly about his alibi.\n";
            
            cout << "The suspect gets defensive and refuses to talk more.\n";
        }
        else if (riskyChoice == 2) {
            cout << "You choose to gather more information before making accusations.\n";
        }
        else {
            cout << "Invalid choice.\n";
            
        }

    }
    