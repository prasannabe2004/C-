#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person
{
    public:
        Person();
        Person(string name, int age);
        string getInfo();
    protected:
    private:
        string name;
        int age;
};

#endif // PERSON_H
