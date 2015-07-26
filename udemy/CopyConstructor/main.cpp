#include <iostream>

using namespace std;
class Animal {
private:
    string name;
public:
    Animal() : name("unnamed"){}
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
    Animal (const Animal &other):name(other.name){}
};
int main()
{
    cout << "Hello world!" << endl;

    Animal animal1;
    cout << animal1.getName() << endl;
    animal1.setName("animal1");
    cout << animal1.getName() << endl;
    Animal animal2 = animal1;
    cout << animal2.getName() << endl;
    return 0;
}
