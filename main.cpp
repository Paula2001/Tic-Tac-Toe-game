#include<iostream>
#include "XO.h"
using namespace std;
int main()
{
    XO *xo = new XO() ;
    xo->control(xo->calculate());
    return 0;
}
