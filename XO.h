#ifndef XO_H
#define XO_H
#include <string>
#include <iostream>
using namespace std;

class XO
{
    public:
        XO();
        void create_board(int v);
        void play(int i);
        char calculate();
        void print_screen();
    protected:

    private:
        int x ,size;
        string **board = new string*[size];
};

#endif // XO_H
