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

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	App obj(10,20,30);

	cout << obj.getX() << endl;
	cout << obj.getY() << endl;
	cout << obj.getZ() << endl;
	cout << obj.getpp() << endl;

	return 0;
}
