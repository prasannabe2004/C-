#include <iostream>

using namespace std;

template <class myclass>

myclass add(myclass x, myclass y)
{
    return x + y;
}
int main()
{
    cout << "Hello world!" << endl;
    int z = add(10,20);
    double a = add(10.3,20.5);
    cout << z << endl;
    cout << a << endl;
    return 0;
}
