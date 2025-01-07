#pragma once
#include <string>
using namespace std;
//#include <vector>

class Clue {
private:
	int clue;
    //vector<string>name;

    public:
        void setClue(const int& newClue);
        int getClue()const;
};