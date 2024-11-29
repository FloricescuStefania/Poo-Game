#include "suspect.h"

Suspect::Suspect() : name("Unknown"), age(0), relation("Unknown") {}

Suspect::Suspect(string name, int age, string relation)
{
    this->name = name;
    this->age = age;
    this->relation = relation;
}

void Suspect::behaviour() {
    cout << "John keeps looking at the door." << endl;
    cout << "Paul avoids eye contact." << endl;
    cout << "Bob seems to have something to hide." << endl;
}

void Suspect::suspectInfo() {
    Suspect suspect1("John ", 30, "friend");
    Suspect suspect2("Bob", 32, "coworker");
    Suspect suspect3("Paul", 28, "neighbour");

    suspect1.print();
    suspect2.print();
    suspect3.print();

    cout << "A good choice.You need to know information about the suspects in this case." << endl;
    
    //TO DO-add score
   
}

void Suspect::print()
{
    cout << "Name: " << name << " , " << "Age: " << age << " , " << "Relation with the victim: " << relation << endl;
}

