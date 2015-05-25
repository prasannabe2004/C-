#include <iostream>
#include "constru.h"

using namespace std;

constru::constru()
{
    //ctor
    cout << "Default constructor" << endl;
}

constru::constru(int n)
{
    //ctor
    cout << "Constructor with 1 argument" << endl;
    number = n;
}

constru::constru(int x, int y, int z)
{
    //ctor
    cout << "Constructor with 3 arguments" << endl;
    a = x;
    b = y;
    c = z;
}

constru::~constru()
{
    cout << "Default Destructor" << endl;
}

