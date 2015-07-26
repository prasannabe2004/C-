#include "Machine.h"

Machine::Machine()
{
    //ctor
}

Machine::Machine(unsigned int id)
{
    this->id = id;
}

Machine::getInfo()
{
    return id;
}
Machine::~Machine()
{
    //dtor
}
