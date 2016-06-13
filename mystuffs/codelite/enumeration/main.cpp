#include <iostream>
#include "enum.h"

using namespace std;

int main(int argc, char **argv)
{
	Colors c = Colors::RED;
	
	if ( c == Colors::RED)
		cout << "RED color" << endl;
	else
		cout << "Something else" << endl;
			
	
	return 0;
}
