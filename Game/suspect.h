#pragma once

#include <string>
#include <iostream>
#include "player.h"
using namespace std;

class Suspect
{
private:
    string name;
    int age;
    string relation;

public:
    Suspect();
    Suspect(string name, int age, string relation);
    void print() ; 
    void behaviour();
    void suspectInfo();


};

