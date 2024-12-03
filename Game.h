#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>

struct Character {
    string playerName;
    int age;
    int strength;
    int stamina;
    int wisdom;
    int pridePoints;
};
class Game{
    private:
    vector<Character> characterList;

    public:
    Game();
    bool readCharacter(string);
    void printCharaterList();
    void printPlayer(int);
    void removeCharater(string);
    //bool checkSameTile(); dont know if needed
    Character selectCharacter(string);
    bool findCharacter(string);
};
#endif
