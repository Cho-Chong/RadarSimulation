/*
* File: Cable.h
*
* Description: 
*
*/

#ifndef CABLE_H
#define CABLE_H

#include "Record.h"

namespace Model
{
    class Cable : public Record
    {
    public:
        Cable();
        virtual ~Cable();

    private:
        //double BandwidthHz;
        double lengthMeter;
        double LossDbPerMeter;
    };
}

#endif /*CABLE_H*/
