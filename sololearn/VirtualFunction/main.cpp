#include <iostream>

using namespace std;


class Enemy {

    public:
        virtual void attack() {
            cout << "Enemy attack" << endl;
        }
};

class Ninja : public Enemy {

    public:
        void attack() {
            cout << "ninja attack" << endl ;
        }
};

class Monster : public Enemy {
    public:
        void attack() {
            cout << "monster attack" << endl ;
        }
};
int main()
{
    cout << "Hello world!" << endl;

    Ninja n;
    Monster m;

    Enemy *e1 = &n;
    Enemy *e2 = &m;

    e1->attack();
    e2->attack();

    return 0;
}
