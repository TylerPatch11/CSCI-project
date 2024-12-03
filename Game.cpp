#include "Game.h"

#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;
/*
    bool readCharacter(string);
    void printCharaterList();
    void printPlayer(int);
    void removeCharater(string);
    //bool checkSameTile(); dont know if needed
    Character selectCharacter(string);
*/
Game::Game(){}
bool Game::readCharacter(string chFile){
    Character character;
    ifstream file(chFile);
    if(file.fail()){
        cout << "failed to open charaters file" << endl;
        return false;
    }
string line;
string hold;
while(getline(file, line)){
    stringstream ss(line);
    getline(ss,hold, '|');
    character.playerName = hold;
    getline(ss, hold, '|');
    character.age = stoi(hold);
    getline(ss, hold, '|');
    character.strength = stoi(hold);
    getline(ss, hold, '|');
    character.stamina =  stoi(hold);
    getline(ss, hold, '|');
    character.wisdom = stoi(hold);
    getline(ss, hold, '|');
    character.pridePoints = stoi(hold);
    characterList.push_back(character);
}
}

