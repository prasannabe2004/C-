#include <iostream>

#include "Cat.h"

using namespace std;

Cat::Cat()
{
    cout << "Cat Constructor" << endl;
}

Cat::~Cat()
{
    cout << "Cat destructor" << endl;
}

void Cat::speak()
{
    cout << "Meow...Meow,.."<<endl;
}

void jump()
{
    cout << "I can jump" <<endl;
}
