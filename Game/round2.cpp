#include "round2.h"

Round2::Round2(string name, string description, bool found) : name(name), description(description), found(found) {}

void Round2:: inspectHouse() {
    cout << "Inspecting the house..." << endl;
    if (found) {
        cout << "Evidence found in the house." << endl;
    }
    else {
        cout << "No evidence found in the house." << endl;
    }
}

bool Round2::foundClue(){
    return found;
}
string Round2::getName() {
    return name;
}
string Round2::getDescription() {
    return description;
}
void Round2::print() {
    Round2 round2;

    Round2 ind1("Blood", "Blood on the bathroom sink.",true);
    Round2 ind2("Footprint", "A footprint on the kitchen floor. ",true);
    Round2 ind3("Knife", "Used knife in bed.",true);

    cout << "Name: " << round2.getName() << endl;
    cout << "Description: " << round2.getDescription() << endl;
}