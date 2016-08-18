#include <iostream>
#include <cassert>
#include <ctime>

using namespace std;

char player = 'x';
char ai = 'o';
int n;
char Board[3][3] = { '1','2','3','4','5','6','7','8','9'};
// draws the board 
void drawBoard() {
	cout<<endl;
	cout<< "Steven's TicTacToe Game."<< endl;
	for(int r=0; r<3; ++r){
		for (int c=0; c<3; ++c){
			Board[r][c] = '_';
		}
	}
}

// displays board to user after a move is made//
void displayBoard(){
    for (int r = 0; r < 3; r++) {   
        for(int c = 0; c < 3; c++){   
            cout << '|' << Board[r][c] << '|';
        }   
      cout << endl;
    }   
    cout << endl;   
}
 // Switches turns //
void TogglePlayer() {
	if(rand() % 2 == 0){
		player = 'x';
  		}else{
		player = 'o';
	}
}
 // human player move //
void playerMoves() {
	cout<< "What's your move?"<< endl;
	int p1Move;
	cin>> p1Move;
	if(p1Move == 1)
		Board[0][0]= player;
	if(p1Move == 2)
	       Board[0][1]= player;
	if(p1Move == 3)
                Board[0][2]= player;
	if(p1Move == 4)
                Board[1][0]= player;
	if(p1Move == 5) 
                Board[1][1]= player;
	if(p1Move == 6)
                Board[1][2]= player;
	if(p1Move == 7)
                Board[2][0]= player;
        if(p1Move == 8)  
                Board[2][1]= player;
        if(p1Move == 9)
                Board[2][2]= player;

}
void cpuMove(){
	int pickedCol;
	pickedCol = rand() % 9;
	if(Board[0][pickedCol] = '_') 
		break;
	}
		for (int r=3; r>=0; --r){
			if(Board[r][pickedCol] == 'o';
			break;
}

// is move valid?
bool tie
/*if (turn == 'x' && Board[row][column] != 'x' && Board[row][column] != 'o') {
        Board[row][column] = 'X';
        turn = 'o';
    }
    else if(turn == 'o' && Board[row][column] != 'x' && Board[row][column] != 'o')
    {
        Board[row][column] = 'o';
        turn = 'x';
    }
    else
    {
        cout << "The cell you chose is used! Try again\n";
        playerMoves();
    }
*/

// winning rows //
char win(){
	// for human player //
	if (Board[0][0] == 'x' && Board[0][1] == 'x' && Board[0][2]== 'x')		return 'x';
	if (Board[1][0] == 'x' && Board[1][1] == 'x' && Board[1][2]== 'x')    		return 'x';
	if (Board[2][0] == 'x' && Board[2][1] == 'x' && Board[2][2]== 'x')              return 'x';
	if (Board[0][0] == 'x' && Board[1][0] == 'x' && Board[2][2]== 'x')              return 'x';
	if (Board[0][0] == 'x' && Board[1][0] == 'x' && Board[2][0]== 'x')              return 'x';
	if (Board[0][1] == 'x' && Board[1][1] == 'x' && Board[2][1]== 'x')              return 'x';
	if (Board[0][2] == 'x' && Board[1][2] == 'x' && Board[2][2]== 'x')              return 'x';
	if (Board[0][0] == 'x' && Board[1][1] == 'x' && Board[2][2]== 'x')  	        return 'x';
	if (Board[2][0] == 'x' && Board[1][1] == 'x' && Board[0][2]== 'x')              return 'x';
	// for computer //
	if (Board[0][0] == 'o' && Board[0][1] == 'o' && Board[0][2]== 'o')              return 'o';
        if (Board[1][0] == 'o' && Board[1][1] == 'o' && Board[1][2]== 'o')              return 'o';
        if (Board[2][0] == 'o' && Board[2][1] == 'o' && Board[2][2]== 'o')              return 'o';
        if (Board[0][0] == 'o' && Board[1][0] == 'o' && Board[2][2]== 'o')              return 'o';
        if (Board[0][0] == 'o' && Board[1][0] == 'o' && Board[2][0]== 'o')              return 'o';
        if (Board[0][1] == 'o' && Board[1][1] == 'o' && Board[2][1]== 'o')              return 'o';
        if (Board[0][2] == 'o' && Board[1][2] == 'o' && Board[2][2]== 'o')              return 'o';
        if (Board[0][0] == 'o' && Board[1][1] == 'o' && Board[2][2]== 'o')              return 'o';
        if (Board[2][0] == 'o' && Board[1][1] == 'o' && Board[0][2]== 'o')              return 'o';
	return '/';
	}
int main(int argc,char*args [] )  {
   n=0;
   srand(time(0));
   drawBoard();
   while (true) {   
	// Computer move //
	// Check if ai wins //	
	n++;
	displayBoard();
//	isMoveValid();
	playerMoves();
	TogglePlayer();
//	aiMove();

	displayBoard();
		if(win()== 'x') {
			cout<< "Humans win!"<< endl;
			break;
		}
		else if (win()== 'o'){
			cout<<"Computer wins!"<< endl;
			break;
		}
		else if (win() =='/' && n==9){
			cout<< " It's a draw!"<< endl;
			break;
		}
		// Check if player wins or ties //
			}
	return 0;
	}

