﻿#include <iostream>
#include "suspect.h"
#include "player.h"
#include "game.h"
#include "round1.h"
using namespace std;


int main() {
    cout << "Welcome to The Final Clue... the game where every second counts.\n";
    Player player;
    Game game;
    game.start();
    cout << "Thanks for playing!" << endl;
    return 0;
}