#pragma once

#include <string>
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
    void display() const; 


};

