#include<iostream>

using namespace std;
bool playerOne(char board[3][3],string p1, string p2){

    clr();
    cout
    <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
    <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
    <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
    cout<<p1<<"'s(X) move: ";
    int m1;
    specialCase:
    do{
        cin>>m1;
        switch (m1){
        case 1:
            if (board[0][0]=='-') {
                board[0][0]={'X'};
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
            
            
        case 2:
            if (board[0][1]=='-') {
                board[0][1]={'X'};
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
                board[0][2]={'X'};
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
                board[1][0]={'X'};
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
                    board[1][1]={'X'};
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
                    board[1][2]={'X'};
                    clr();
                    cout
                    <<"\t\t\t\t\t\t\t"<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n"
                    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
                    <<"\t\t\t\t\t\t\t"<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
                        return true;}
                else {
                    cout<<"That position is already occpied, enter a non occupied cell: ";
                    goto specialCase;
                }
                break;
            
        case 7:
            if (board[2][0]=='-'){
                board[2][0]={'X'};
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
                board[2][1]={'X'};
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
                    board[2][2]={'X'};
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
   }while(m1>9 || m1<=0);
   return false;
}
