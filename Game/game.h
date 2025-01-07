#pragma once
//#include "filehandler.h"
#include <iostream>
using namespace std;

class Game {
private :
	bool running;
	
public:
	Game();
	void gameStory();
	void start();
	void riskyChoice();
	void guess();
	void tryAgain();
};

