#include "XO.h"

XO::XO()
{
    cout << "Enter the board size 3 = 3*3"<<endl;
    int value;
    cin >> value ;
    create_board(value);
    print_screen();
    string x ;
    cin >> x ;
    play(x);
}

void XO::create_board(int v)
{
    int num = 1;
    size = v ;

    for( int i = 0; i < size; ++i ){
        board[i] = new string[size];
    }

    for( int i = 0; i < size; ++i ){
        for( int j = 0; j < size; ++j ){
            board[i][j] = to_string(num);
            num++;
        }
    }
}



void XO::print_screen()
{
    system("cls");
    int num = 1;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {

            (num >= 10)?cout << "|" << board[i][j] <<"|" :cout << "| " << board[i][j] <<"|";
            num++;

        }

        cout  <<endl;
    }
}
void XO::play(string z)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(board[i][j] == z) {
                if(mark == "X"){
                    board[i][j] = mark ;
                    mark = "O";
                }else{
                    board[i][j] = mark;
                    mark = "X";
                }

                break;
            }

        }
    }
    print_screen();
    calculate();
}
char XO::calculate(){
    for(int i = 0; i < size; i++){
        int Xc = 0,Oc = 0;
        int Xr = 0,Or = 0;
        for(int j = 0; j < size; j++){
            if(board[i][j] == "X" ){Xc++;}
            if(board[j][i] == "X"){Xr++;}
            if(board[j][i] == "O"){Or++;}
            if(board[i][j] == "O"){Oc++;}
            if(Xc == size || Oc == size){
                return Xc > Oc ?'X': 'O';
            }
            if(Xr == size || Or == size){
                return Xr > Or ? 'X':'O';
            }
        }
    }
    int Xl = 0,Ol=0;
    for(int i = 0; i < size;i++){
        if(board[i][i] == "X"){Xl++;}
        if(board[i][i]== "O"){Ol++;}
        if(Xl == size || Ol == size){
            return Xl > Ol ? 'X':'O';
        }
    }
    int Xr = 0,Or = 0 ;

    for(int i = 0, j = size - 1;i < size;i++,j-- ){
        if(board[j][i] == "X"){Xr++;}
        if(board[j][i] == "O"){Or++;}
        if(Xr == size || Or == size){
            return Xr > Or ? 'X':'O';
        }
    }

    string x ;
    cin >> x ;
    play(x);
}
void XO::control(char c){
    (c == 'X')?cout << "X TEAM WINS" :cout << "O TEAM WINS" ;
}
