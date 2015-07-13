#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int rows = 10000;
    int cols = 10000;
    int **ptr = new (nothrow) int *[rows];

    for (int i=0;i<rows;i++)
    {
        ptr[i] = new (nothrow) int[cols];
        for (int j=0;j<cols;j++)
            ptr[i][j] = i+j;
    }
    /**
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
            cout << ptr[i][j] << endl;
    }
    **/
    for (int i=0;i<rows;i++)
        delete[] ptr[i];

    delete[] ptr;

    return 0;
}
