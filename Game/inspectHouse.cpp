#include<iostream>
#include <string>
using namespace std;
#include "inspecthouse.h"
#include "filehandler.h"

void InspectHouse::choseRoom() {
    cout << "You are in the house of the victim" << endl;
    cout << "Chose a room for inspection" << endl;
    //filehandler.roomList();
    int inspect;
    cin >> inspect;


    switch (inspect) {
    case 1: break;
    case 2: break;
    case 3: break;
    default: break;
    }
}
