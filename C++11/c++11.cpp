/*
c++11.cpp
pmohanasundaram
*/

#include <iostream>

#include <vector>

using namespace std;
int main()
{
	vector <string> x = {"Hello", "Universe"};

	for(string y:x)
	{
		cout << y << endl;
	}

	return 0;
}
