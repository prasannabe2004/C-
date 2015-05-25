#include "Sally.h"
#include <iostream>

using namespace std;

Sally::Sally(int a)
:num(a)
{

}

Sally Sally::operator+(Sally sp)
{
    Sally newsp(0);
    newsp.num = num+sp.num;
    return newsp;
}
