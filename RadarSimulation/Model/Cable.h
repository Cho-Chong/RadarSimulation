/*
* File: Cable.h
*
* Description: 
*
*/

#ifndef _CABLE_H_
#define _CABLE_H_

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

#endif /*_CABLE_H_*/
