#pragma once

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

