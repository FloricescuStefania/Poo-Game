#include "score.h"
#include "game.h"
#include <iostream>
using namespace std;

Game scoregame;

//default contructor
Score::Score() : score(0) {}

//method to check if the player can guess the murderer based on their score
void Score::guessScore() const {
	if (score >= 50) {
		cout << "You can guess who is the murderer!" << endl;
		scoregame.guess();
	}
	else
		cout << "Try to gain more points!" << endl;
	scoregame.start();
}

//method to get the current score
int Score::getScore() const {
    return score;
}

//method to set the score to a new value
void Score::setScore(int newscore) {
	if (newscore >= 0) {
		score = newscore;
	}
	else {
		cout << "Invalid score. Score cannot be negative." << endl;
	}
}

//method to add 10 points to the current score
void Score::addScore() {
	score += 10;
}

//method to reduce 10 points to the current score
void Score::reduceScore() {
	if (score > 0) {
		score -= 10;
	}
	else {
		score = 0;
	}
}

//method to display the current score
void Score::displayScore() const {
	cout << "The current score is: " << score <<endl;
}