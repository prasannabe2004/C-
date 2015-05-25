#include <iostream>
#include "Buritto.h"

using namespace std;


Buritto::Buritto()
{
    //ctor
    cout << "I am in Constructor" << endl;
}

Buritto::~Buritto()
{
    //dtor
    cout << "I am in Destructor" << endl;
}

void Buritto::testPrint()
{
    cout << "Test the print " << endl;
}
