#include "XO.h"

XO::XO()
{
    cout << "Enter the board size"<<endl;
    int value;
    cin >> value ;
    create_board(value);
    print_screen();
}

void XO::create_board(int v)
{
    int num = 1;
    size = v ;

    for( int i = 0; i < size; ++i ){
        board[i] = new string[size];
    }

    for( int i = 0; i < size; ++i )
    {
        for( int j = 0; j < size; ++j )
        {
            board[i][j] = "1";
        }
    }
}



void XO::print_screen()
{
    int num = 1;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            (num >= 10)?cout << board[i][j] <<" ":cout << board[i][j] <<"  ";
            num++;
        }
        cout <<endl;
    }
}
void XO::play(int i)
{

}
