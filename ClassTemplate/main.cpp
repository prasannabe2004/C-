#include <iostream>

using namespace std;

template <class T>

class myclass {
    T first;
    T second;
    public:
        myclass( T a, T b) {
            first = a;
            second = b;
        }
        T bigger();
};

template <class T>
T myclass<T>::bigger() {
    return first > second ? first : second;
}
int main()
{
    cout << "Hello world!" << endl;

    myclass<double> obj(69,105.5);
    cout << obj.bigger();

    return 0;
}
