#ifndef MACHINE_H
#define MACHINE_H


class Machine
{
    public:
        Machine();
        Machine(unsigned int);
        virtual ~Machine();
        getInfo();
    protected:
    private:
        unsigned int id;
};

#endif // MACHINE_H
