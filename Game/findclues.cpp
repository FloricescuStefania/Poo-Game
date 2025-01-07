#include "findclues.h"
#include<iostream>
#include <string>
using namespace std;
#include "filehandler.h"
#include "game.h"
#include "score.h"


FileHandler cluefile;

void FindClues::addRoom(const string& room) {
    rooms.push_back(room); 
}
void FindClues::choseRoom() {
    cout << "You are in the house of the victim.";
    cout << "Chose a room for inspection:";
    cout << "But be careful.In every room you cand find a clue or not.If you don't find anything you can lose points!";
    cout << "Is your choice.Use it wisely!" << endl; 
    

    cluefile.roomList();
    int room;
    cin >> room;

    switch (room) {
    case 1: cout << "You are in the kitchen." << endl;
        cluefile.clueList("rooms.txt", "clue.txt", room); 
        continueInspecting(); 
        break;

    case 2: cout << "You are in the living room." << endl;
        cluefile.clueList("rooms.txt", "clue.txt", room);
       continueInspecting();
        break;

    case 3: cout << "You are in the bedroom." << endl;
        cluefile.clueList("rooms.txt", "clue.txt", room); 
        continueInspecting();
        break;

    case 4: cout << "You are in the bathroom." << endl;
        cluefile.clueList("rooms.txt", "clue.txt", room);
        continueInspecting(); 
        break;

    case 5: cout << "You are in the garage." << endl;
        cluefile.clueList("rooms.txt", "clue.txt", room);
        continueInspecting();
        break;

    case 6: cout << "You are in the garden." << endl;
        cluefile.clueList("rooms.txt", "clue.txt", room); 
        continueInspecting();
        break;
    default: cout << "Invalid choice!" << endl;
        choseRoom(); break;
    }
}


void FindClues ::continueInspecting() {
    Game roomgame;
    cout << "Would you lke to chose another room?(1-yes,2-no)" << endl;
    int inspect;
    cin >> inspect;
    switch (inspect) {
    case 1: cout << "You chose to inspect another room!" << endl; choseRoom(); break;
    case 2: cout << "Return to main menu..." << endl;  roomgame.start();  break;
    default: cout << "Invalid choice!" << endl; break;
    }
}