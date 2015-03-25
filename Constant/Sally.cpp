#include "Sally.h"
#include <iostream>

using namespace std;

Sally::Sally(int a, int b)
:regVar (a),
constVar (b) {
    //ctor
    cout << "This is constructor" << endl;

}

void Sally::print()
{
    cout << " regular variable is " << regVar << endl;
    cout << " constant variable is " << constVar << endl;
}
void Sally::print() const
{
    cout << " regular variable is " << regVar << endl;
    cout << " constant variable is " << constVar << endl;
}
Sally::~Sally()
{
    //dtor
    cout << "This is destructor" << endl;
}
void Sally::testFunction()
{
    cout << "test function" << endl;
}

void Sally::testFunction() const
{
    cout << "test const function" << endl;
}
