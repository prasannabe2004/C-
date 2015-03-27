#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Birthday birthdate(1,9,1983);

    People prasanna("prasanna",birthdate);

    prasanna.printInfo();

    return 0;
}
