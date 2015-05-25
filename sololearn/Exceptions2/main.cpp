#include <iostream>

using namespace std;

int main()
{
    try
    {
        int num1;
        int num2;
        cout << "Enter first number: " <<endl;
        cin >> num1;
        cout << "Enter first number: " <<endl;
        cin >> num2;

        if (num2 == 0)
            throw 0;

        cout << "Answer is: " << num1/num2 << endl;

    }
    catch(...)
    {
        cout << "Divide by zero exception" << endl;
    }
    return 0;
}
