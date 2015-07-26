#include <iostream>

using namespace std;

void show1(string f[])
{
    cout << sizeof(f)<<endl;
    for (int i =0 ;i <3;i++)
        cout << f[i] << endl;
}
int main()
{
    string fruits[] ={"apple", "orange", "banana"};

    cout << sizeof(fruits) << endl;
    //show1(friuts);
    return 0;
}
