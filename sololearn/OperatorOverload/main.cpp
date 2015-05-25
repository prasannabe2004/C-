#include <iostream>
#include "Sally.h"

using namespace std;


int main()
{
    Sally a(30);
    Sally b(40);
    Sally c(0);
    c = a+b;

    cout << c.num<<endl;
    return 0;
}
