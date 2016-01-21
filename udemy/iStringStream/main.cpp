#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    istringstream iss ("32 Prasanna 2 1450");

    string str;
    int val;

    iss >> val;
    cout << val << '\n';

    iss >> str;
    cout << str << "\n";

    cout << "Remaining: " << iss.str() << '\n';
    return 0;
}
