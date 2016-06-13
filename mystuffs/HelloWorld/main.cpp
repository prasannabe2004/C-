#include <iostream>

#include "Test.h"

using namespace std;

int main(int argc, char **argv)
{
	cout << "hello world" << endl;
	
	Test t1;
	
	int x = 0b111;
	
	cout << t1.getX() << endl;
	
	cout << x << endl;
	
	
	return 0;
}
