#ifndef VEHICLE_H
#define VEHICLE_H

#include "Machine.h"


class Vehicle : public Machine
{
    public:
        Vehicle(unsigned int);
        virtual ~Vehicle();
    protected:
    private:
};

#endif // VEHICLE_H
