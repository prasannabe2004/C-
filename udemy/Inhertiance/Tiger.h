#ifndef TIGER_H
#define TIGER_H

#include "Cat.h"

#include <iostream>
using namespace std;

class Tiger : public Cat
{
    public:
        Tiger();
        virtual ~Tiger();
        void attack();
    protected:
    private:
};

#endif // TIGER_H
