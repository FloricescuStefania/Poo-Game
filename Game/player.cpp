#include "player.h"
#include "game.h"
#include "score.h"
#include <iostream>

Game playergame;
//constructor that provide information about the player

Player::Player() 
{
	cout << "Enter your name:" << endl;//the player write the name
	getline(cin, name);

	cout << "Please enter your age: " << endl;//the player write the age
	cin >> age;
	cin.ignore();

//if the player is older than 18 he can play
	if (age > 18)       
		cout << "Welcome!Nice to meet you:" << name << endl;
	else
	{
		cout << "You can't play!I'm sorry!" << endl; 
		exit(0);
	}

}
