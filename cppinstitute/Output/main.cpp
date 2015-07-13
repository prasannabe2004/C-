#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int byte = 255;
    float x = 2.5, y = 0.0000000025;

    cout << dec << byte << endl;
    cout << hex << byte << endl;
    cout << oct << byte << endl;

    cout << setbase(16) << byte << endl;

    cout << fixed << x << " " << y << endl;
    cout << scientific << x << " " << y << endl;

    return 0;
}
