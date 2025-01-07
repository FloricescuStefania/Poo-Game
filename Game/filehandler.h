#pragma once

#include <fstream>
using namespace std;

 class FileHandler {
private:
	ifstream file;
	string fileName;

public:
	void suspectBehaviour();
	void questionFile();
    void roomList();
	void suspectsInfo();
	void getSuspectResponse(const string& fileName, int questionNumber);
	void clueList(const string& roomsFile, const string& cluesFile, int roomNumber);
};