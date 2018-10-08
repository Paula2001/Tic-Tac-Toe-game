#ifndef XO_H
#define XO_H
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

class XO
{
    public:
        XO();
        void create_board(int v);
        void play(string z);
        void print_screen();
        void control(char c);
                char calculate();

    private:
        string mark = "X" ;
        int x ,size;
        string **board = new string*[size];


};

#endif // XO_H
