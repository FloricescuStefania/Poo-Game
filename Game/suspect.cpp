#include "suspect.h"
#include "filehandler.h"

//Suspect::Suspect() {}

Suspect::Suspect(string name, int age, string relation) //constructor for suspects
{
    this->name = name;
    this->age = age;
    this->relation = relation;
}

void Suspect::print() const //method to display information about suspects
{
    cout <<"Name: " << name << " , " << "Age: " << age << " , " << "Relation with the victim: " << relation << endl;
}

