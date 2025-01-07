#include "suspect.h"
#include <iostream>

//default constructor
Suspect::Suspect() { name = "default"; age = 0; relation = "default"; }

//parameterized constructor 
Suspect::Suspect(string name, int age, string relation) : name(name), age(age), relation(relation) {}

//method to display information about suspects
void Suspect::display()const 
{
    cout << "Name: " << name << " , " << "Age: " << age << " , " << "Relation with the victim: " << relation << endl;
}
