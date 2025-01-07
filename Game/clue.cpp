#include "clue.h"

int Clue:: getClue() const {
    return clue;
}

void Clue::setClue(const int& newClue) {
    clue = newClue;
}

void Clue::addClue(const string& clues) {
    cluename.push_back(clues);
}