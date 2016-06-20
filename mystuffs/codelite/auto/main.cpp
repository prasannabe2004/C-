#include <iostream>

using namespace std;

// 4 types of auto key word usage in c++

// Available since c++11
auto function(int a) -> int
{
	return 3;
}

auto function2()
{
	return 3;
}
// 2 new since c++14

auto function3()
{
	return "prasanna";
}

int main(int argc, char **argv)
{
	cout << "hello world\n" << endl;
	
	cout << function(3) << endl;

	cout << function2() << endl;
	
	auto str = function3();
	
	cout << str << endl;
	
	return 0;
}
