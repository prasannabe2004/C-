#include <iostream>
#include <assert.h>

using namespace std;

void function(int n)
{
    assert(n>0);

    cout << n << endl;
}
int main()
{
    cout << "Hello world!" << endl;

    function(3);

    function(-1);
    return 0;
}
