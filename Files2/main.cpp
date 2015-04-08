#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("sam.txt");

    file << "I love you" << endl;

    if(file.is_open())
    {
        cout << "File is open" << endl;
    }
    else
    {
        cout << "Mesh up" << endl;
    }
    file.close();

    return 0;
}
