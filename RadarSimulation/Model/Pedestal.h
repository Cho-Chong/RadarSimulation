/*
* File: Pedestal.h
*
* Description: Pedestal is the hardware front end for receiving/transmitting signals
* Probably will be broken down to smaller components like "Servo" and "Encoder"
*
*/

#ifndef PEDESTAL_H
#define PEDESTAL_H

#include "Record.h"

namespace Model
{
    class Pedestal : public Record
    {
    public:
        Pedestal();
        virtual ~Pedestal();

    private:
        double AzimuthDeg;
        double ElevationDeg;
        double Diameter;
        double PowerLossDb;
        double NoiseDb;
    };
}

#endif /*PEDESTAL_H*/
