#pragma once

#include <fstream>
#include "score.h"
using namespace std;

 class FileHandler {
private:
	ifstream file;
	string fileName;

public:
	//FileHandler();
	void suspectBehaviour();
	void questionFile();
    void roomList();
	void suspectsInfo();
	void getSuspectResponse(const string& fileName, int questionNumber);
	void clueList(const string& roomsFile, const string& cluesFile, int roomNumber);
};