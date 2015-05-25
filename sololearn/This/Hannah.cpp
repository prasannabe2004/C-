#include "Hannah.h"
#include <iostream>

using namespace std;

Hannah::Hannah(int a)
:num(a)
{
    //ctor
}

Hannah::~Hannah()
{
    //dtor
}

void Hannah::printVar()
{
    cout << num << endl;
    cout << this->num << endl;
    cout << (*this).num << endl;
}
