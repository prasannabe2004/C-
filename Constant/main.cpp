#include <iostream>
#include "Sally.h"

using namespace std;

int main()
{
    Sally test(10,20);
    test.testFunction();
    test.print();

    const Sally constant(30,40);
    constant.testFunction();
    constant.print();

    cout << "Hello world!" << endl;
    return 0;
}
