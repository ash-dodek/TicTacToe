#include<iostream>

using namespace std;
bool checkWinX(char board[3][3],string p1,string p2) {
    if (board [0][0] == board [0][1] && board [0][1] == board [0][2] && board[0][1] != '-' &&board[0][1]=='X'  ){
            cout<<p1<<" HAS WON THIS GAME, CONGRATS!\nBetter luck next time "<<p2<<endl<<endl;
            return true;
        }
         else if (board [1][0] == board [1][1] && board [1][1] == board [1][2] && board [1][1] != '-' &&board[1][1]=='X' ){
            cout<<p1<<" HAS WON THIS GAME, CONGRATS!\nBetter luck next time "<<p2<<endl<<endl;
            return true;
        }
        else if (board [2][0] == board [2][1] && board [2][1] == board [2][2] && board [2][1] != '-' &&board[2][1]=='X' ){
            cout<<p1<<" HAS WON THIS GAME, CONGRATS!\nBetter luck next time "<<p2<<endl<<endl;
            return true;
        }
        else if (board [0][0] == board [1][0] && board [1][0] == board [2][0] && board [1][0]!='-' &&board[1][0]=='X' ){
            cout<<p1<<" HAS WON THIS GAME, CONGRATS!\nBetter luck next time "<<p2<<endl<<endl;
            return true;
        }
        else if (board [0][1] == board [1][1] && board [1][1] == board [2][1] && board [1][1] != '-' &&board[1][1]=='X' ){
            cout<<p1<<" HAS WON THIS GAME, CONGRATS!\nBetter luck next time "<<p2<<endl<<endl;
            return true;
        }
        else if (board [0][2] == board [1][2] && board [1][2] == board [2][2] && board [1][2] != '-' &&board[1][2]=='X' ){
            cout<<p1<<" HAS WON THIS GAME, CONGRATS!\nBetter luck next time "<<p2<<endl<<endl;
            return true;
        }
        else if (board [0][0] == board [1][1] && board [1][1] == board [2][2] && board [1][1] != '-' &&board[1][1]=='X'){
            cout<<p1<<" HAS WON THIS GAME, CONGRATS!\nBetter luck next time "<<p2<<endl<<endl;
            return true;
        }
        else if (board [0][2] == board [1][1] && board [1][1] == board [2][0] && board [1][1] != '-' &&board[1][1]=='X'){
            cout<<p1<<" HAS WON THIS GAME, CONGRATS!\nBetter luck next time "<<p2<<endl<<endl;
            return true;
        }
    return false;
}