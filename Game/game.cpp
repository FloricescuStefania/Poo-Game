#include "suspect.h"
#include "game.h"
#include "interrogate.h"
#include "findclues.h"
#include "filehandler.h"
#include "score.h"
#include <iostream>
using namespace std;

Interrogate interrogate;
FindClues findclues;
FileHandler filehandler;
Score score;

//default constructor
Game::Game() { running = "false"; }

//method for giving a story to the game
void Game::gameStory() {
    cout << "Welcome to the the Final Clue! A game based on your choices and preferences. " << endl;
    cout << "Your goal is to find the murderer and win the game."
        "Attention: in each room there is a clue that can guide you to success!Good luck!" << endl;
}
//method for managing the game
void Game::start() {

    while (running) {
        int choice;
        cout << "\nWhat would you like to do first?(1-6) " << endl;
        cout << "1. View suspect information." << endl;
        cout << "2. View suspect behaviour." << endl;
        cout << "3. Interrogate the suspects." << endl;
        cout << "4. Make a risky choice." << endl;
        cout << "5. Inspect the house." << endl;
        cout << "6. Guess the murderer." << endl;
        cout << "7. Exit the game." << endl;
        cin >> choice;

        switch (choice) {
        case 1: filehandler.suspectsInfo();
            cout << "\nA good choice.You need to know information about the suspects in this case." << endl;
            score.addScore(); score.displayScore();
            break;
        case 2: filehandler.suspectBehaviour();
            cout << "\nVery good. This may help you find the murderer." << endl;
            score.addScore(); score.displayScore();
            break;
        case 3:  score.addScore(); score.displayScore();  interrogate.interrogate();break;
        case 4: riskyChoice(); break;
        case 5: score.addScore(); score.displayScore(); findclues.choseRoom(); break;
        case 6: score.guessScore();
        case 7: cout << "Exiting the game...Goodbye!" << endl; exit(0); break;
        default: cout << "Invalid choice.\n";  break;
        }
    }
}

//method for risky choice 
void Game::riskyChoice() {
    int riskychoice;
    cout << "Do you want to make a risky action? (1 for yes, 2 for no): ";
    cin >> riskychoice;

    if (riskychoice == 1) {
        cout << "You are so brave!You decide to confront the suspect directly.";
        cout << "But now you scared the suspect and he gets defensive." << endl;
        score.reduceScore();
    }
    else if (riskychoice == 2) {
        cout << "A wise choice!You choose to gather more information before making accusations.\n";
        score.addScore();

    }
    else {
        cout << "Invalid choice.Please try again:\n";
        riskyChoice();
    }
    score.displayScore();
}

//method for choosing and finding the murderer only if you have enough score to guess

void Game::guess() {

    cout << "Who do you think is the murderer?(1-3)" << endl;
    filehandler.suspectsInfo();
    int murderer;
    cin >> murderer;
    if (murderer == 1) {             //is the murderer
        cout << "Congratulations!You found the murderer!" << endl;
        cout << "Exactly, the killer is his friend John! All the clues match what happened!"
            "He was invited home after the meeting in the park, after they hadn't seen each other for a long time."
            "They looked at old photos, drank wine, but a fight broke out between the two."
            "John stabbed his friend with that knife found in the kitchen!"
            "The key he lost in the garage and the plant in the garden are the clues that he ran out the back of the house!" << endl;
        exit(0);
    }
    else {
        cout << "Sorry!He is not the murderer!" << endl; //is not the murderer
        tryAgain();
    }
}

//method to choose if you want to try again
void Game::tryAgain() {
    char choice;
    bool validChoice = false;

    while (!validChoice) {
        cout << "Do you want to try again? (1 for yes, 2 for no): ";
        cin >> choice;

        if (choice == '1') {
            validChoice = true;
            guess();            //try again to guess the suspect
        }
        else if (choice == '2') {
            validChoice = true;
            exit(0);            //exit the game
        }
        else {
            cout << "Invalid choice. Please enter 1 to try again or 2 to continue." << endl;
        }
    }
}