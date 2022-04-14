#include<iostream>
using namespace std;
void moverRobo(char board[3][3]) {
    ifFail:
    int Fm1 = INT_MIN;
    int move=-42069;
    while (Fm1<=0||Fm1>=10) {
        int Fm1 = rand()%9+1;
        if (Fm1>=1&&Fm1<=9) {
            move = Fm1;
            break;
        }else continue;
    }
    // int move = 5;
    if(move==1){
        if (board[0][0]=='-'){
        board[0][0]={'O'};
        clr();
        cout
            <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
            <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
            <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
            <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
            <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
        }
        else goto ifFail;
        }
    else if(move==2){
        if (board[0][1]=='-'){
        board[0][1]={'O'};
        clr();
        cout
            <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
            <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
            <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
            <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
            <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
        }
        else goto ifFail;
    }
    else if(move==3){
        if (board[0][2]=='-'){
        board[0][2]={'O'};
        clr();
        cout
            <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
            <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
            <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
            <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
            <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
        }
        else goto ifFail;
    }
    else if(move==4){
        if (board[1][0]=='-'){
        board[1][0]={'O'};
        clr();
        cout
            <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
            <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
            <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
            <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
            <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
        }
        else goto ifFail;
    }
    else if(move==5){
        if (board[1][1]=='-'){
        board[1][1]={'O'};
        clr();
        cout
            <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
            <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
            <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
            <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
            <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
        }
        else goto ifFail;
    }
    else if(move==6){
        if (board[1][2]=='-'){
        board[1][2]={'O'};
        clr();
        cout
            <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
            <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
            <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
            <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
            <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
        }
        else goto ifFail;
    }
    
    else if(move==7){
        if (board[2][0]=='-'){
        board[2][0]={'O'};
        clr();
        cout
            <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
            <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
            <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
            <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
            <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
        }
        else goto ifFail;
    }
    
    else if(move==8){
        if (board[2][1]=='-'){
        board[2][1]={'O'};
        clr();
        cout
            <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
            <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
            <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
            <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
            <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
        }
        else goto ifFail;
    }
    
    else if(move==9){
        if (board[2][2]=='-'){
        board[2][2]={'O'};
        clr();
        cout
            <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
            <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
            <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
            <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
            <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
        }
        else goto ifFail;
    }
    
    else cout<<"error 69";
    
}





// // bool lolFunct(char board[3][3]) {
//     string p1,p2 ="Computer";
//     cout<<"What's your name?: ";
//     cin>>p1;
//     int freeSpaces=9;
    
//     while(checkWinX(board,p1,p2)==false&&checkWinY(board,p1,p2)==false&&freeSpaces<=9){
//         // if (checkWinX(board,p1,p2)==false&&checkWinY(board,p1,p2)==false){
//             playerOne(board,p1,p2);
//             freeSpaces--;
//             if (freeSpaces==0&&(checkWinX(board,p1,p2)==false&&checkWinY(board,p1,p2)==false)){
//                 cout<<"Uh oh, no one won, match tied :(\nBetter luck next time!";
//                 break;
//             }else

//             // if (checkWinX(board,p1,p2)==false&&checkWinRobo(board,p1,p2)==false) {
//             if (checkWinX(board,p1,p2)==false&&checkWinY(board,p1,p2)==false) {
                
//                     // playerTwo(board,p1,p2);

//                 freeSpaces--;
//                 if (freeSpaces==0&&(checkWinX(board,p1,p2)==false&&checkWinY(board,p1,p2)==false)){
//                 cout<<"Uh oh, no one won, match tied :(\nBetter luck next time!";
//                 // moverRobo(board,m1);
//                 break;
//                 }
//             }
//             else break;

//         // freeSpaces--;
//         // playerOne(board,p1,p2);

//     }
// }