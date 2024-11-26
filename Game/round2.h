#pragma once
#include <string>
#include <iostream>
using namespace std;

class Round2 {
private:
	string name;
	string description;
	bool found;

public:
	Round2(string name, string description, bool found);
	void inspectHouse();
	bool foundClue();
	void print();
	string getName();
	string getDescription();

};