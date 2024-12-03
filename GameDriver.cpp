#include "Board.h"
#include "Game.h"
#include "Player.h"

#include <fstream>
#include <iostream>

using namespace std;

int main() {
  srand(time(0));
  int player = 0;

cout << "Welcome to the game of lion king!";
Board board();
Game game();
game.readCharacter("characters.txt");
for(int i = 0; i < 2; i++){
    cout << "Enter player name: " << endl;
    string Pname;
    cin.ignore(1000, '\n');
    getline(cin, Pname);
    cout << "Nice! here is a list of all of the characters, pick one!" << endl;
    game.printCharacterList();
    cout << "The selected character is: ";
    string name;
    cin >> name;
    while (cin.fail() || game.findCharacter(name) == false) {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Please enter a valid character name(case sensitive): ";
      cin >> name;
    }
    Player players(game.selectCharacter(name), Pname);

}
}