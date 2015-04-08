#include <iostream>

using namespace std;

int main()
{
    try {
        int momAge = 90;
        int sonAge = 34;

        if(sonAge > momAge)
        {
            throw 99;
        }
    }
    catch(int x)
    {
        cout << "Son cannot be older than mom. Error number = " << x << endl;
    }
    return 0;
}
