#include<iostream>
using namespace std;
bool checkWinY(char board[3][3],string p1,string p2) {
    if (board [0][0] == board [0][1] && board [0][1] == board [0][2] && board[0][1] != '-'  && board[0][1]=='O'){
        cout<<p2<<" HAS WON THIS GAME, CONGRATS!\nBetter luck next time"<<p1<<endl<<endl;
        return true;
    }
    else if (board [1][0] == board [1][1] && board [1][1] == board [1][2] && board [1][1] != '-' && board[0][1]=='O'){
    cout<<p2<<" HAS WON THIS GAME, CONGRATS!\nBetter luck next time"<<p1<<endl<<endl;
    return true;
    }
    else if (board [2][0] == board [2][1] && board [2][1] == board [2][2] && board [2][1] != '-' && board[0][1]=='O'){
        cout<<p2<<" HAS WON THIS GAME, CONGRATS!\nBetter luck next time"<<p1<<endl<<endl;
        return true;
    }
    else if (board [0][0] == board [1][0] && board [1][0] == board [2][0] && board [1][0]!='-' && board[0][1]=='O'){
        cout<<p2<<" HAS WON THIS GAME, CONGRATS!\nBetter luck next time"<<p1<<endl<<endl;
        return true;
    }
    else if (board [0][1] == board [1][1] && board [1][1] == board [2][1] && board [1][1] != '-' && board[0][1]=='O'){
        cout<<p2<<" HAS WON THIS GAME, CONGRATS!\nBetter luck next time"<<p1<<endl<<endl;
        return true;
    }
    else if (board [0][2] == board [1][2] && board [1][2] == board [2][2] && board [1][2] != '-' && board[0][1]=='O'){
        cout<<p2<<" HAS WON THIS GAME, CONGRATS!\nBetter luck next time"<<p1<<endl<<endl;
        return true;
    }
    else if (board [0][0] == board [1][1] && board [1][1] == board [2][2] && board [1][1] != '-'&&board[1][1]=='O'){
        cout<<p2<<" HAS WON THIS GAME, CONGRATS!\nBetter luck next time"<<p1<<endl<<endl;
        return true;
    }
    else if (board [0][2] == board [1][1] && board [1][1] == board [2][0] && board [1][1] != '-'&&board[1][1]=='O'){
        cout<<p2<<" HAS WON THIS GAME, CONGRATS!\nBetter luck next time"<<p1<<endl<<endl;
        return true;
    }
    return false;
}