#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    ostringstream ss;
    string name = "Prasanna";
    int age = 32;

    ss << "My name is ";
    ss << name;
    ss << " and my age is ";
    ss << age;
    ss << ".";

    cout << ss.str() << endl;
    return 0;
}
