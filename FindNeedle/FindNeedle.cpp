/*
 * FindNeedle.cpp
 *
 *  Created on: Mar 19, 2015
 *      Author: PMohanasundaram
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str("There are two needle in this haystack needle");
	string str2("needle");
	int found = 0;

	while(found != -1)
	{
		found = str.find(str2, found);
		cout << found << endl;
		if (found != -1)
			found = found +1;
	}
	return 0;
}


