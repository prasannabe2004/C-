#include <iostream>
#include <array>

using namespace std;

int main(int argc, char **argv)
{
	cout<<"hello world\n"<<endl;
	
	array<int,5> arr={1,2,3,4,5};
	
	int i=0;
	
	for (i=0;i<5;i++)
		cout<< arr[i] <<endl;
		
	return 0;
}
