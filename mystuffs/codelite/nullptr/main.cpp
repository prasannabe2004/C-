#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int* ptr = nullptr;
	
	ptr = new int;
	
	*ptr = 8;
	
	cout << *ptr << endl;
	
	delete ptr;
	
	return 0;
}
