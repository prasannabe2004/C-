#include <iostream>

using namespace std;

template <class T>

class Spunky {
    public:
        Spunky(T x)
        {
            cout << x << " is not char" << endl;
        }

};

template <>
class Spunky<char> {
    public:
        Spunky(char x)
        {
            cout << x << " is a char" << endl;
        }
};

int main()
{
    cout << "Hello world!" << endl;

    Spunky<int> obj1(3);
    Spunky<double> obj2(10.4);
    Spunky<char> obj3('c');

    return 0;
}
