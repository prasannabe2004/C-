#include <iostream>

#include "Animal.h"
#include "Cat.h"
#include "Tiger.h"

using namespace std;

int main()
{
    Animal a1;
    Cat c1;
    Tiger t1;

    a1.speak();

    c1.speak();
    c1.jump();

    t1.speak();
    t1.jump();
    t1.attack();

    return 0;
}
