#include<iostream>
using namespace std;
bool playerTwo(char board[3][3], string p1, string p2){
    clr();
    cout
        <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
        <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
        <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
        <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
        <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
    cout<<p2<<"'s(O) move: ";
    int m2;
    specialCase:
    do{
        cin>>m2;
        switch (m2){
        case 1:
            if (board[0][0]=='-') {
                board[0][0]={'O'};
                clr();
                cout
                    <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
                    // playerOne(board,p1,p2);
                    return true;
                }
            else {
                cout<<"That position is already occpied, enter a non occupied cell: ";
                goto specialCase;
            }
            break;
            
            
        case 2:
            if (board[0][1]=='-') {
                board[0][1]={'O'};
                clr();
                cout
                    <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
                    return true;
            }
            else {
                cout<<"That position is already occpied, enter a non occupied cell: ";
                goto specialCase;
            }
            break;
                
            
        case 3:
            if (board[0][2]=='-'){
                board[0][2]={'O'};
                clr();
                cout
                    <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
                    return true;
            }
            else {
                cout<<"That position is already occpied, enter a non occupied cell: ";
                goto specialCase;
            }
            break;
            
        case 4:
            if (board[1][0]=='-'){
                board[1][0]={'O'};
                clr();
                cout
                    <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
                    return true;
                }
            else {
                cout<<"That position is already occpied, enter a non occupied cell: ";
                goto specialCase;
            }
            break;
            
        case 5:
            if (board[1][1]=='-'){
                board[1][1]={'O'};
                clr();
                cout
                    <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
                    return true;
            }
            else {
                cout<<"That position is already occpied, enter a non occupied cell: ";
                goto specialCase;
            }
            break;
            
        case 6:
            if (board[1][2]=='-'){
                board[1][2]={'O'};
                clr();
                cout
                    <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
                    return true;
                }
            else {
                cout<<"That position is already occpied, enter a non occupied cell: ";
                goto specialCase;
            }
            break;
            
        case 7:
            if (board[2][0]=='-'){
                board[2][0]={'O'};
                clr();
                cout
                    <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
                    return true;
            }        
            else {
                    cout<<"That position is already occpied, enter a non occupied cell: ";
                    goto specialCase;
                }
            break;
            
        case 8:
            if (board[2][1]=='-'){ 
                board[2][1]={'O'};
                clr();
                cout
                    <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
                    return true;
            }
            else {
                cout<<"That position is already occpied, enter a non occupied cell: ";
                goto specialCase;
            }

            break;
            
        case 9:
            if (board[2][2]=='-'){
                board[2][2]={'O'};
                clr();
                cout
                    <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
                    return true;
            }
            else {
                cout<<"That position is already occpied, enter a non occupied cell: ";
                goto specialCase;
            }

            break;
        default:
                cout<<"Only values 1 to 9 are allowed, please enter again: ";
            break;
        }
   }while(m2>9 || m2<=0);
   return false;
}
