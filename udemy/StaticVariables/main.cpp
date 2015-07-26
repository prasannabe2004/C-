#include <iostream>

using namespace std;
class test {
public:
    static const int id=9;
};

int main()
{
    cout << "Hello world!" << endl;

    test t1;

    cout<<t1.id<<endl;

    return 0;
}
