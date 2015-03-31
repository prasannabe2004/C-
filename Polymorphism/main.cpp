#include <iostream>

using namespace std;

class Enemy {
    protected:
        int attackPower;
    public:
        void setAttackPower(int a)
        {
            attackPower = a;
        }
};

class Ninja : public Enemy {
    public:
        void attack()
        {
            cout << "I am an ninja attack -" << attackPower << endl;
        }
};

class Monster : public Enemy {
    public:
        void attack()
        {
            cout << "I am an Monster attack -" << attackPower << endl;
        }
};

int main()
{
    Ninja n;
    Monster m;
    Enemy *e1 = &n;
    Enemy *e2 = &m;
    e1->setAttackPower(29);
    e2->setAttackPower(10);

    n.attack();
    m.attack();

    return 0;
}
