#pragma once

#include <iostream>
using namespace std;

class Game {
private :
	bool running;
public:
	Game() : running(false) {};
	void start();
	bool continueGame();
	bool guess();
};

