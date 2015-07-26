#include <iostream>

#include "Cat.h"
#include "Animal.h"

using namespace std;

using namespace n1;

int main()
{
    Cat cat3;
    cat3.speak();

    n1::Cat cat;
    cat.speak();

    n2::Cat cat2;
    cat2.speak();

    return 0;
}
