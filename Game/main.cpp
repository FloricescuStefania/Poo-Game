#include <iostream>
#include "suspect.h"
#include "player.h"
#include "game.h"
#include "interrogate.h"
#include "filehandler.h"
#include "score.h"
using namespace std;

int main() {

    Game game;
    game.gameStory();
    Player player;
    game.start();
    cout << "Thanks for playing!" << endl;
   
    return 0;
}