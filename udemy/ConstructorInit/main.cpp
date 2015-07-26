#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Person person1("Prasanna",32);
    Person person2;

    cout << person1.getInfo()<<endl;
    cout << person2.getInfo()<<endl;

    return 0;
}
