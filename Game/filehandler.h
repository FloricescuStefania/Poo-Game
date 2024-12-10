#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class FileHandler {
private:
	ifstream file;
	string fileName;
public:
	FileHandler();
	void suspectBehaviour();
	void questionFile();
	// void roomList();
	void suspects_info();
	void getSuspectResponse(const string& fileName, int questionNumber);
};