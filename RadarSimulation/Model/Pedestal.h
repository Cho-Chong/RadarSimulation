/*
* File: Pedestal.h
*
* Description: Pedestal is the hardware front end for receiving/transmitting signals
* Probably will be broken down to smaller components like "Servo" and "Encoder"
*
*/

#ifndef _PEDESTAL_H_
#define _PEDESTAL_H_

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

#endif /*_PEDESTAL_H_*/
