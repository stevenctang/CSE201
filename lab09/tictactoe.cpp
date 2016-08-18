#include <iostream>
#include <ctime>

using namespace std;

char Board [9];
/* Draws the board

 __+__+__
 __+__+__
 __+__+__

*/
void printBoard ( ) { 
  cout << endl;
  cout << Board[0] << " | " << Board[1] << " | " << Board[2] << endl;
  cout << "--+---+--" << endl;
  cout << Board[3] << " | " << Board[4] << " | " << Board[5] << endl;
  cout << "--+---+--" << endl;
  cout << Board[6] << " | " << Board[7] << " | " << Board[8] << endl;
  cout << endl;
}

//Is the move valid?
bool moveIsValid (int m ) { 
  if (Board[m] != 'x' && Board[m] != 'o') {
    return true;
  } else {
    cout<<"\n" "Spot already taken! Choose another spot!" "\n"<< endl;
    return false;
        }   
}

// Winning Rows
int winningRow(){
if (Board[0] == Board[1] && Board[1] == Board[2]) {
  if (Board[0] == 'x') {
    return 1;
  } else {
    return 2;
  }
}
if (Board[3] == Board[4] && Board[4] == Board[5]) {
  if (Board[3] == 'x') {
    return 1;
  } else {
    return 2;
  }
}
if (Board[6] == Board[7] && Board[7] == Board[8]) {
  if (Board[6] == 'x') {
    return 1;
  } else {
    return 2;
  }
}
if (Board[0] == Board[3] && Board[3] == Board[6]) {
  if (Board[0] == 'x') {
    return 1;
  } else {
    return 2;
  }
}
if (Board[1] == Board[4] && Board[4] == Board[7]) {
  if (Board[1] == 'x') {
    return 1;
  } else {
    return 2;
  }
}
if (Board[2] == Board[5] && Board[5] == Board[8]) {
  if (Board[2] == 'x') {
    return 1;
  } else {
    return 2;
  }
}
if (Board[0] == Board[4] && Board[4] == Board[8]) {
  if (Board[0] == 'x') {
    return 1;
  } else {
    return 2;
  }
}
if (Board[2] == Board[4] && Board[4] == Board[6]) {
  if (Board[2] == 'x') {
    return 1;
  } else {
    return 2;
  }
}
return 0;
}

int main (int argc,char*args []) {

srand (time (NULL) );// seeds random

Board[0] = '0';
Board[1] = '1';
Board[2] = '2';
Board[3] = '3';
Board[4] = '4';
Board[5] = '5';
Board[6] = '6';
Board[7] = '7';
Board[8] = '8';

int player = 1;
int Move;
int totalMoves = 0;

cout<<"\n" "Welcome to Steven's Tic Tac Toe Game!"<<endl;
cout<<"Enter y to play, enter n to exit." << endl;
	char Answer;
	cin >> Answer;

  if (Answer == 'n' ) {
	cout<<"\n" "I see you're too scared. See ya!"<< endl;
	return 0; // exits program
	}
  else if (Answer == 'y') {
    while (winningRow ( ) ==0 && totalMoves < 9) {
      do {
        // Show the board
        printBoard ();
        // Tell which player to move
	if (player== 1){
	  cout << "Player, please enter your move." << endl;
          cin >> Move;
        } else {
	// This is the computer's random move
          Move = rand() % 9;
          cout << "The Computer's move is: " << Move << endl;
        } 
      }

 while (moveIsValid (Move) != true);
      // Add 1 to Total_Moves, can't be more than 9
      totalMoves++;
	switch (player) {
        case (1): {
          Board[Move] = 'x';
          player = 2;
          break;
        }
        case (2): {
          Board[Move] = 'o';
          player = 1;
        }
      }
    }
    printBoard ();
    if (winningRow () == 1) {
      printBoard();
      cout << "The human has won the game!" << endl;
    } 
    if (winningRow () == 2) { 
      printBoard();
      cout << "What! The Computer won! " << endl;
    } 
    if (totalMoves==9 && !winningRow()) {
      printBoard();
      cout << "It's a tie game!" << endl;
    }
  }
  return 0;
}
