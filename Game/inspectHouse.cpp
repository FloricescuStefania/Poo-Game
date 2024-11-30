#include<iostream>
#include <string>
using namespace std;
#include "inspecthouse.h"


InspectHouse::InspectHouse() {
    rooms = {
        { "kitchen" },
        { "living Room" },
        { "bedroom" },
        { "bathroom" },
        { "garage" },
        { "garden" }
    };
}

void InspectHouse::displayRooms() const {
    cout << "Rooms available to inspect:(1-6)\n";
    for (const auto& room : rooms) {
        cout << room.name << "\n";
    }
}

void InspectHouse::chooseRoom() {
    cout << "You are in the house of the victim" << endl;
    cout << "Choose a room for inspection" << endl;
    displayRooms();
    int inspect;
    cin >> inspect;

    if (inspect >= 1 && inspect <= rooms.size()) {
        cout << "You are in " << rooms[inspect - 1].name << endl;
    }
    else {
        cout << "Invalid choice. Please select a valid room number.\n";
    }

    switch (inspect) {
    case 1: break;
    case 2: break;
    case 3: break;
    default: break;
    }
}