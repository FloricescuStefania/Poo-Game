#include "player.h"
#include <iostream>

Player::Player() //constructor that provide information about the player
{
	cout << "Enter your name:" << endl;//the player write the name
	getline(cin, name);

	cout << "Please enter your age: " << endl;//the player write the age
	cin >> age;
	cin.ignore();
}
