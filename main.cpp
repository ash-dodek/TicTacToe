#include<iostream>
#include <string>
#include "docs/clear.h"
#include "docs/winners/winner_X.hpp"
#include "docs/winners/winner_Y.hpp"
#include "docs/playerOne.hpp"
#include "docs/playerTwo.hpp"
#include "AI/aibot.hpp"
#include "AI/roboWin.hpp"
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
   x:
   int ch;
   details();
   char board[3][3]={
                  {'-','-','-'},
                  {'-','-','-'},
                  {'-','-','-'},
                  };

   do{
      string redo;
      do{
         cin>>ch;
         if (ch==1) {
            // do{
               clr();
               string players[2];
               string p1,p2;
               char player;
               cout<<"Who is Player 1?: ";
               cin.ignore();
               getline(cin, p1);
               cout<<"Who is Player 2?: ";
               cin.ignore();
               getline(cin, p2);
               clr();
               // string p1 = players[0];
               // string p2 = players[1];
            
            // real shit #1
               int freeSpaces=9;
               while(checkWinX(board,p1,p2)==false&&checkWinY(board,p1,p2)==false&&freeSpaces<=9){
                  playerOne(board,p1,p2);
                  freeSpaces--;
                  if (freeSpaces==0&&(checkWinX(board,p1,p2)==false&&checkWinY(board,p1,p2)==false)){
                     cout<<"Uh oh, no one won, match tied :(\nBetter luck next time!\n";
                     break;
                  }else  
                  
                  
                  if (checkWinX(board,p1,p2)==false&&checkWinY(board,p1,p2)==false) {
                     playerTwo(board,p1,p2);
                     freeSpaces--;
                     if (freeSpaces==0&&(checkWinX(board,p1,p2)==false&&checkWinY(board,p1,p2)==false)){
                        cout<<"Uh oh, no one won, match tied :(\nBetter luck next time!\n";
                        break;
                     }
                  }
                  else {
                     break;
                  }
               }
               cout<<"do you want to play again?(y/n):";
               cin>>redo;
               if(redo=="y"||redo=="Y"||redo=="yes"||redo=="YES") 
               goto x;
            // }while(redo=="y"||redo=="Y"||redo=="yes"||redo=="YES");
         }
         else if (ch==2) {
            // lolFunct(board);
            string p1,p2 ="Computer";
            cout<<"What's your name?: ";
            // cin>>p1;
            cin.ignore();
            getline(cin, p1);

            int freeSpaces=9;
            
            while(checkWinX(board,p1,p2)==false&&checkWinRobo(board,p1,p2)==false&&freeSpaces<=9){
               // if (checkWinX(board,p1,p2)==false&&checkWinY(board,p1,p2)==false){
               playerOne(board,p1,p2);
               freeSpaces--;
               if (freeSpaces==0&&(checkWinX(board,p1,p2)==false&&checkWinRobo(board,p1,p2)==false)){
                  cout<<"Uh oh, no one won, match tied :(\nBetter luck next time!\n";
                  break;
               }else

               // if (checkWinX(board,p1,p2)==false&&checkWinRobo(board,p1,p2)==false) {
               if (checkWinX(board,p1,p2)==false&&checkWinRobo(board,p1,p2)==false) {
                  moverRobo(board);
                     // playerTwo(board,p1,p2);

                  freeSpaces--;
                  if (freeSpaces==0&&(checkWinX(board,p1,p2)==false&&checkWinRobo(board,p1,p2)==false)){
                  cout<<"Uh oh, no one won, match tied :(\nBetter luck next time!\n";
                  // moverRobo(board,m1);
                  break;
                  }
               }
               else break;

        // freeSpaces--;
        // playerOne(board,p1,p2);

    }
            // break;
            // break;
            // defCase();
            cout<<"do you want to play again?(y/n):";
               cin>>redo;
               if(redo=="y"||redo=="Y"||redo=="yes"||redo=="YES") 
               goto x;
               else break;
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
