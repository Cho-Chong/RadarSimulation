/*
* File: Receiver.h
*
* Description: Receiver processes the incoming signal and potentially does data processing
* Probably will be broken down to smaller components like "DownConverter" and "AGC"
*
*/

#ifndef _RECEIVER_H_
#define _RECEIVER_H_

#include "Record.h"

namespace Model
{
    class Receiver : public Record
    {
    public:
        Receiver();
        virtual ~Receiver();

    private:
        double BaseBandHz;
        double BandwidthHz;
        double PowerLossDb;
        double AgcDb;
        double NoiseDb;
    };
}

#endif /*_RECEIVER_H_*/
