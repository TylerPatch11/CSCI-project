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
Player playersList[2];
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
    playersList[player] = players;
    player++;
}
board.displayBoard();
int pick = 0;
while(board.getPlayerPosition() < 52){
    //maybe add check to see if they are out of stamina line 97 replit
    cout << "It is " << playersList[board.getTurn()].getPlayerName() << "'s turn , Player " << board.getTurn() << endl;
}

}
/*Main Menu: Select an option to continue
1. Check Player Progress (1)
2. Review Character (2)
3. Check Position (3)
4. Review your Advisor (4)
5. Move Forward (5*/