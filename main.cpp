#include<bits/stdc++.h>
#include<conio.h>
#include "docs/clear.h"
#include "docs/winners/winner_X.hpp"
#include "docs/winners/winner_Y.hpp"
#include "docs/playerOne.hpp"
#include "docs/playerTwo.hpp"
#include "misc.hpp"
using namespace std;
int main() {
   /* 
   1 2 3
   4 5 6
   7 8 9
   enter value 1-9
   */
   // initialising the board
   int ch;
   details();

   do{
      string redo;
      do{
         cin>>ch;
         if (ch==1) {
            do{
               char board[3][3]={
                              {'-','-','-'},
                              {'-','-','-'},
                              {'-','-','-'},
                              };
               clr();
               string players[2];
               cout<<"Who is Player 1?: ";
               cin>>players[0];
               cout<<"Who is Player 2?: ";
               cin>>players[1];
               clr();
               string p1 = players[0];
               string p2 = players[1];
            
            // real shit #1
               int freeSpaces=9;
               while(checkWinX(board,p1,p2)==false&&checkWinY(board,p1,p2)==false&&freeSpaces<=9){
                  playerOne(board,p1,p2);
                  freeSpaces--;
                  if (freeSpaces==0&&(checkWinX(board,p1,p2)==false&&checkWinY(board,p1,p2)==false)){
                     cout<<"Uh oh, no one won, match tied :(\nBetter luck next time!";
                     break;
                  }else  
                  
                  
                  if (checkWinX(board,p1,p2)==false&&checkWinY(board,p1,p2)==false) {
                     playerTwo(board,p1,p2);
                     freeSpaces--;
                     if (freeSpaces==0&&(checkWinX(board,p1,p2)==false&&checkWinY(board,p1,p2)==false)){
                        cout<<"Uh oh, no one won, match tied :(\nBetter luck next time!";
                        break;
                     }
                  }
                  else {
                     break;
                  }
               }
               cout<<"do you want to play again?(y/n):";
               cin>>redo;
            }while(redo=="y"||redo=="Y"||redo=="yes"||redo=="YES");
         }
         else if (ch==2) {
            defCase();
         }
         else if (ch==3) {
            defCase();
         }
         else {
            cout<<"Choice doesn't exits.., try again:";
         }
      }while(ch>=2||ch<=0);
   }while(ch<=0||ch>=4);
   
   // getch();


}