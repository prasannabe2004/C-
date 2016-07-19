//============================================================================
// Name        : testBc2.cpp
// Author      : Prasanna
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "App.h"

using namespace std;

void printValues( App obj)
{
	cout << obj.getX() << endl;
	cout << obj.getY() << endl;
	cout << obj.getZ() << endl;
	cout << obj.getpp() << endl;
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	/* Constructor with few parameters and rest with default values */
	App obj = App(10,20,30);
	printValues(obj);

	/* Constructor with all default values */
	App obj2 = App();
	printValues(obj2);

	return 0;
}
