#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string myName("Prasanna");

    string my = myName;

    cout << my<<endl<<myName << endl;

    cout << "P.M. " + my << endl;

    getline(cin,my);

    cout << my << endl;

    return 0;
}
