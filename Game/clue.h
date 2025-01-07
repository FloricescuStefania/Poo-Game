#pragma once
#include <string>
using namespace std;
#include <vector>

class Clue {
private:
	int clue;
    vector<string>cluename;

    public:
        void setClue(const int& newClue);
        int getClue()const;
        void addClue(const string& clues);

};