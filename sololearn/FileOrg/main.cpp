#include <iostream>
#include "Buritto.h"

using namespace std;

int main()
{
    Buritto br;
    Buritto *ptr = &br;
    br.testPrint();
    ptr->testPrint();
    cout << "End of Main!!" << endl;
    return 0;
}
