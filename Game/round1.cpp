#include <string>
#include <iostream>
using namespace std;
#include "round1.h"
#include "suspect.h"


void Round1::begin() {

    cout << "Who do you want to interrogate? (1-3): ";
    cout << "1.John" << endl;
    cout << "2.Bob" << endl;
    cout << "3.Paul" << endl;
    int choice;
    cin >> choice;

    switch (choice) {
    case 1:
        suspectName = "John";
        cout << "You choose Bob" << endl;
        break;
    case 2:
        suspectName = "Bob";
        cout << "You choose John" << endl;
        break;
    case 3:
        suspectName = "Paul";
        cout << "You choose Paul" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }

}
void Round1::interrogate()
{
    int question;
    cout << "What do you want to ask first? (1-3)" << endl;
    cout << "1.Where were you at the time of the crime?" << endl;
    cout << "2.Did you speak to the victim on the day of the murder?" << endl;
    cout << "3.Did you have a close relationship with the victim?" << endl;
    cin >> question;

    switch (question)
    {
    case 1:
        if (suspectName == "John")
            cout << "I was home all night, watching a movie. You can check the security cameras in my building." << endl;
        else if (suspectName == "Jake")
            cout << "I was out with some friends. I think I was somewhere around town." << endl;
        else if (suspectName == "Bob")
            cout << "I was at an important meeting... I didn’t have time to think about anything else." << endl;
        break;

    case 2:
        if (suspectName == "Paul")
            cout << "I sent a quick message, but didn’t get a reply. It wasn’t anything serious." << endl;
        else if (suspectName == "Jake")
            cout << "No, I hadn’t spoken with Nicholas in a few weeks." << endl;
        else if (suspectName == "Bob")
            cout << "No, I was actually surprised to hear he was in town that day." << endl;
        break;

    case 3:
        if (suspectName == "Paul")
            cout << "He was my neighbor. I still can’t believe this happened." << endl;
        else if (suspectName == "John")
            cout << "Not really. We only met a few times through mutual friends." << endl;
        else if (suspectName == "Bob")
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
            score -= 10;
            cout << "The suspect gets defensive and refuses to talk more.\n";
        }
        else if (riskyChoice == 2) {
            cout << "You choose to gather more information before making accusations.\n";
            score += 5;
        }
        else {
            cout << "Invalid choice.\n";
            score -= 10;
        }

    }
