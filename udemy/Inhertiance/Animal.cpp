#include "Animal.h"

Animal::Animal()
{
    cout << "Animal construtor" << endl;
}

Animal::~Animal()
{
    cout << "Animal destrutor" << endl;
}

void Animal::speak()
{
    cout << "Animal cannot speak" << endl;
}
