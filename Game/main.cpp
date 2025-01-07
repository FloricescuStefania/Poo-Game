#include <iostream>
#include "player.h"
#include "game.h"
using namespace std;

int main() {

    Game game;
    game.gameStory();
    Player player;
    game.start();
    cout << "Thanks for playing!" << endl;
   
    return 0;
}