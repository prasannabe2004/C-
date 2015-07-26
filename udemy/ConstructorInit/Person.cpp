#include "Person.h"
#include <sstream>

Person::Person()
{
    this->name ="unnamed";
    this->age = 0;
}
Person::Person(string name, int age)
{
    this->name = name;
    this->age = age;
}

string Person::getInfo()
{
    stringstream ss;
    ss << "My name is ";
    ss << this->name;
    ss << " and my age is ";
    ss << this->age;
    ss << ".";

    string info = ss.str();
    return info;
}
