/*
* File: Antenna.h
*
* Description: Antenna is the hardware to transmit/receive Radar signals
*
*/

#ifndef _ANTENNA_H_
#define _ANTENNA_H_

#include "Record.h"

namespace Model
{
    class Antenna : public Record
    {
    public:
        Antenna();
        virtual ~Antenna();

    private:
        double TransmitPattern; 
        double Directivity;
        double GainDb;
        LUID type; //i.e. monopole, dipole, array
        double BandWidthHz;
        double Efficiency;
    };
}

#endif /*_ANTENNA_H_*/
