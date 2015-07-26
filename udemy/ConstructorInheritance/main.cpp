#include <iostream>
#include "Machine.h"
#include "Vehicle.h"

using namespace std;

int main()
{
    Machine m1(34);
    cout << m1.getInfo() << endl;

    Vehicle v1(45);
    cout << v1.getInfo();

    return 0;
}
