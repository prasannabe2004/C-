#ifndef CAT_H
#define CAT_H

#include "Animal.h"

#include <iostream>
using namespace std;

class Cat : public Animal
{
    public:
        Cat();
        virtual ~Cat();
        void jump();
    protected:
    private:
};

#endif // CAT_H
