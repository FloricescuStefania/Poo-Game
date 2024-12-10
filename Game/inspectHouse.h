#pragma once
#include <vector>
#include <string>
using namespace std;

class InspectHouse{
private:

    string clueName;
    string description;

    struct Room {//the struct of a room
        string name;//the name of the room
        vector<InspectHouse> clues; //the list of the clues
    };

    vector<Room> rooms;//the list of the rooms
public:
    //Round2(const string& clueName = "", const string& description = "");
    void choseRoom();

};