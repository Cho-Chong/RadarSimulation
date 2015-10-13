/*
* File: Receiver.h
*
* Description: Receiver processes the incoming signal and potentially does data processing
* Probably will be broken down to smaller components like "DownConverter" and "AGC"
*
*/

#ifndef RECEIVER_H
#define RECEIVER_H

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

#endif /*RECEIVER_H*/
