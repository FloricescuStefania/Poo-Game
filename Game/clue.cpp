#include "clue.h"
#include "findclues.h"

FindClues inspect;

int Clue:: getClue() const {
    return clue;
}

void Clue::setClue(const int& newClue) {
    clue = newClue;
}
