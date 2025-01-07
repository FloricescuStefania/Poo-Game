#include "suspect.h"
#include <iostream>

//Suspect::Suspect(){};

//Suspect::Suspect() { name = "default"; age = 0; relation = "default"; }

Suspect::Suspect(string name, int age, string relation) : name(name), age(age), relation(relation) {}

void Suspect::print()const //method to display information about suspects
{
    cout <<"Name: " << name << " , " << "Age: " << age << " , " << "Relation with the victim: " << relation << endl;
}
