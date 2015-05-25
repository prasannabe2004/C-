#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file;

    file.open("tuna.txt");

    file << "I love tuna. Tuna loves me." << endl;

    file.close();

    return 0;
}
