#include "Game.h"

#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;
/*
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
    characterList.pushback(character);
    return true;
}
}
void Game::printCharaterList(){
    for(int i = 0; i < characterList.size(); i++){
        cout << "Name: " << characterList.at(i).name << endl;
        cout << "Age: " << characterList.at(i).age << endl;
        cout << "Strength: "  << characterList.at(i).strength << endl;
        cout << "Stamina: "  << characterList.at(i).stamina << endl;
        cout << "Wisdom: " << characterList.at(i).wisdom << endl;
        cout << "Pride Points: " << characterList.at(i).pridePoints << endl;
        cout << "----------------------------------" << endl; 
    }
}
bool Game::findCharacter(string player){
    for (int i = 0; i < characterList.size(); i++) {
    if (characterList.at(i).name == player) {
      return true;
    }
  }
  return false;
}

