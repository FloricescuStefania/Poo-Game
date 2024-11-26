#include "player.h"
#include <iostream>

Player::Player()
{
	cout << "Enter your name:" << endl;
	getline(cin, name);

	cout << "Please enter your age: " << endl;
	cin >> age;
	cin.ignore();
}
