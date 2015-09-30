/*
* File: Transmitter.h
*
* Description: Transmitter sends the RADAR signal.
* Probably will be broken down to smaller components like "Modulator" and "Magnetron"
*
*/

#ifndef _TRANSMITTER_H_
#define _TRANSMITTER_H_

#include "Record.h"

namespace Model
{
    class Transmitter : public Record
    {
    public:
        Transmitter();
        virtual ~Transmitter();

    private:
        double PowerWatts;
        double FrequencyHz;
        double PulseWidth;
        double PRF;
    };
}

#endif /*_TRANSMITTER_H_*/
