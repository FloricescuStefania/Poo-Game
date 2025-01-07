#pragma once
#include <vector>
#include <string>
using namespace std;

class FindClues
{
private:
   vector<string>rooms;
   
public:
    //Round2(const string& clueName = "", const string& description = "");
    void choseRoom();
    void continueInspecting();
    void addRoom(const std::string& room);

};