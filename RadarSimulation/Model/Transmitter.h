/*
* File: Transmitter.h
*
* Description: Transmitter sends the RADAR signal.
* Probably will be broken down to smaller components like "Modulator" and "Magnetron"
*
*/

#ifndef TRANSMITTER_H
#define TRANSMITTER_H

#include "Record.h"

namespace Model
{
    class Transmitter : public Record
    {
    public:
        Transmitter(double power, double freq, double pulse_width, double prf);
        virtual ~Transmitter();

    private:
        double PowerWatts;
        double FrequencyHz;
        double PulseWidth;
        double PRF;
    };

    //TODO: move to cpp

    //Transmitter::Transmitter(double power, double freq, double pulse_width, double prf) :
    //    PowerWatts(power),
    //    FrequencyHz(freq),
    //    PulseWidth(pulse_width),
    //    PRF(prf)
    //{

    //}

    //Transmitter::~Transmitter()
    //{

    //}
}

#endif /*TRANSMITTER_H*/
