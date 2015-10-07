/*
* File: Space.h
*
* Description: A discrete volume of space
*
*/

#ifndef _SPACE_H_
#define _SPACE_H_

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

#endif /*_SPACE_H_*/
