#include<iostream>
#include<ctime>
using namespace std;

char board[9] = { '+', '+', '+', '+', '+', '+', '+', '+', '+' };
char human, cpu;
int C_P_U = rand() % 9;
int square;

int whosefirst()
{ 
    int currentplayer;
    if(rand() % 2 == 0)
    {
        currentplayer = 0;
    }
    else
    {
        currentplayer = 1;
    }
     return currentplayer;
}

void printBoard(char borad[9])
{
    cout << "     |     |     " << endl;
    cout << "  " << board[0] <<  "  |  " << board[1] << "  |  " << board[2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "  " << " " << "  |  " << " " << "  |  " << " " << endl;
    cout << "  " << board[3] <<  "  |  " << board[4] << "  |  " << board[5] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "  " << " " << "  |  " << " " << "  |  " << " " << endl;
    cout << "  " << board[6] <<  "  |  " << board[7] << "  |  " << board[8] << endl;
    cout << "  " << " " << "  |  " << " " << "  |  \n\n";
}

bool legalMove(int square)
{
    if(square < 0 || square > 9) 
    {
        return false;
    }
    if(board[square] != '+')
    {
        return false;
    }
    return true;
}

bool availableSquare(int square)
{
    for(int s = 0; s < 9; ++s)
    {
       if(board[square] != '+')
       {
           return false;
       }
    }
    return true;
}

void playerMove()
{
    bool gameOver = false;
    cout << "You Go First!!" << endl;
    int turn = 0;
    char answer;

    while(gameOver == false)
    {
            cout << "    " << "Choose a Square: ";
            cin >> square;
            --square;
          
         if(availableSquare(square) == true && legalMove(square) == true)
         {
            board[square] = human;
            cout << endl;
            printBoard(board);
            square = C_P_U;   
            board[square] = cpu;

         }
         else
         {
            cout << "Bad Move !! Please Try again !!" << endl;
         }
         if(turn == 9)
         {
             cout << "It's a tie !!!" << endl;
             cout << "Would You like to Play again? (Y/N): ";
             cin >> answer;
             if(answer == 'N' || answer == 'n')
             {
                 gameOver = true;            
                 break;
             }
         }
         turn++;
     }
}

/*
bool winner(board[9])
{
    if(board[0] == 'X'; 
            
             

}
*/

int main(int argc, char * args[])
{
    srand(time(0));
    char answer;
    bool gameOver = false;
    cout << "\n\n" << "Let's Play tic tac toe !!!!" << endl;
 
    if(whosefirst() == 0)
    {
       // cout << "You GO first !!";
        human = 'X';
        cpu = 'O';        
    }
    else
    {    
        cpu = 'X';
        human = 'O'; 
    } 

    printBoard(board);
    while(true)
    {
        if(human == 'X')    
        {
           // cout << "You Go First !! " << endl;
            playerMove();
        }
        else if(human == 'O')
        {
            //cout << "Noooo!! The computer is First!!\n";
           // cout << "You are the Os !!\n";
           // cout << "   " << "Choose a Square: ";
        }
    }
    return 0;
}    

 
/*    
    cout << "\n" << "Would YOU like to play again ? (Y/N): ";
    cin >> answer;
    if(answer == 'N' || answer == 'n')
    {
       gameOver = true;
    }
  }
    while(gameOver == false);
    return 0;
}
*/
