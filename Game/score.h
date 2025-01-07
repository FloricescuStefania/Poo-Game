#pragma once

class Score {
private:
	int score;

public:
	Score();
	void guessScore() const;
	void setScore(int newscore);
	int getScore()const;
	void addScore();
	void reduceScore();
	void displayScore() const;;
};