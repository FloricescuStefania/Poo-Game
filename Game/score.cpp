#include "score.h"
#include "iostream"
#include "game.h"
#include "player.h"

Game scoregame;

Score::Score() : score(0) {}

void Score::guessScore() const {
	if (score >= 100) {
		cout << "You can guess who is the murderer!" << endl;
		scoregame.guess();
	}
	else
		cout << "Try to gain more points!" << endl;
	scoregame.start();
}

int Score::getScore() const {
    return score;
}

void Score::setScore(int newscore) {
	if (newscore >= 0) {
		score = newscore;
	}
	else {
		cout << "Invalid score. Score cannot be negative." << endl;
	}
}
void Score::addScore() {
	score += 10;
}

void Score::reduceScore() {
	if (score > 0) {
		score -= 10;
	}
	else {
		score = 0;
	}
}

void Score::displayScore() const {
	cout << "The current score is: " << score <<endl;
}