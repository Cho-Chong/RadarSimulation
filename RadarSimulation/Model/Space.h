/*
* File: Space.h
*
* Description: A discrete volume of space
*
*/

#ifndef SPACE_H
#define SPACE_H

#include "Record.h"

namespace Model
{
    class Space : public Record
    {
    public:
        Space();
        virtual ~Space();

    private:
        double BaseBandHz;
        double BandwidthHz;
        double PowerLossDb;
        double AgcDb;
        double NoiseDb;
    };
}

#endif /*SPACE_H*/
