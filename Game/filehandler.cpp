#include "filehandler.h"
#include <iostream>
#include <sstream>
#include "suspect.h" 
#include <string>
#include <vector>

//method for using a file about suspects' behavior during interrogation
void FileHandler::suspectBehaviour() {
        
        string fileName = "suspect_behaviour.txt"; //file name
        ifstream file(fileName); //opens the file and reads data from it 

        string line; //each line of the file
        if (!file.is_open()) {
            cout << "Error:The file " << fileName << " was not found!" << endl; //if can't open the file
            return;
        }
        while (getline(file, line)) { //read and display each valid line
            cout << line << endl;
        }
        file.close(); //close the file
}

//method for using a file about suspects' information 
void FileHandler::suspectsInfo() {
    string fileName = "suspect_info.txt"; //file name
    ifstream file(fileName); //opens the file and reads data from it
    string line;             //each line of the file
    if (file.is_open()) {
        while (getline(file, line)) {
            istringstream ss(line);  //use stringstream for line splitting
            string name, relation;
            int age;

            // read the data from file
            getline(ss, name, ',');  //read people's names up to the comma
            ss >> age;                // read the age
            ss.ignore(1, ',');        // ignore the comma
            getline(ss, relation);    // read the variable "relation"

            Suspect suspect(name,age,relation); //create an object with the read data
            suspect.display(); //print the information about the suspects
        }
        file.close(); //close the file
    }
    else {
        cerr << "The file was not found!" << std::endl; //if can't open the file
    }
}

//method that displays the questions used to interrogate suspects
void FileHandler::questionFile() {
    string fileName = "questions.txt"; //file name
    ifstream file(fileName);  //open the file and reads data from it

    if (!file.is_open()) {
        cout << "Error:The file " << fileName << " was not found." << endl; //if can't open the file
        return;
    }
    string line; //each line of the file
    while (getline(file, line)) {
        cout << line << endl; //read and display each valid line
    }

    file.close(); //close the file
}

//method that deals with choosing the file based on the suspect and the question asked 
void FileHandler::getSuspectResponse(const string& fileName, int questionNumber) {
    ifstream file(fileName);  // open the right file 

    if (!file.is_open()) {
        cout << "Error: The file " << fileName << " was not found." << endl; //if can't open the file
        return;
    }

    string line; // each line of the file
    int currentLine = 1; // current line is 1

    while (getline(file, line)) {
        if (currentLine == questionNumber) { 
            cout << "Response: " << line << endl; //the suspect's answer to the chosen question
            file.close();
            return;
        }
        currentLine++; //move to another line based on question
    }

    file.close();  // close file
}

//method that uses files for the camera list
void FileHandler::roomList(){

    string fileName = "rooms.txt";
    ifstream file(fileName);

    if (!file.is_open()) {
        cout << "Error: The file " << fileName << " was not found." << endl;
        return;
    }
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}

//method that uses files for the clue list
void FileHandler::clueList(const string& roomsFile, const string& cluesFile, int roomNumber) {
    ifstream rooms(roomsFile);  
    ifstream clues(cluesFile);  

    if (!rooms.is_open()) {
        cout << "Error: The file " << roomsFile << " was not found." << endl;
        return;
    }
    if (!clues.is_open()) {
        cout << "Error: The file " << cluesFile << " was not found." << endl;
        return;
    }

    string roomLine;
    string clueLine;
    int currentRoom = 1; 
    bool clueFound = false;

    while (getline(rooms, roomLine) && getline(clues, clueLine)) {
        if (currentRoom == roomNumber) {
            cout << "Clue: " << clueLine << endl;
            clueFound = true;
            break;
        }
        currentRoom++;
    }

    if (!clueFound) {
        cout << "No clue found for this room!" << endl;
    }

    rooms.close();
    clues.close();
}
