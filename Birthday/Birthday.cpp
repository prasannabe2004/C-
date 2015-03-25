#include "Birthday.h"
#include <iostream>
using namespace std;

Birthday::Birthday(int m, int d, int y)
: month(m),
day(d),
year(y)
{
    //ctor
}

Birthday::~Birthday()
{
    //dtor
}

void Birthday::printDate()
{
    cout << month << "/" << day << "/" << year << endl;
}
