#pragma once
#include <vector>
#include <string>
using namespace std;

class FindClues
{
private:
   vector<string>rooms;
   
public:
    void choseRoom();
    void continueInspecting();
    void addRoom(const std::string& room);

};