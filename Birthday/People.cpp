#include <iostream>
#include "People.h"
#include "Birthday.h"

using namespace std;

People::People(string x, Birthday bo)
:name(x),dob(bo)
{
    //ctor
}

void People::printInfo()
{
    cout << name << " was born on ";
    dob.printDate();
}
