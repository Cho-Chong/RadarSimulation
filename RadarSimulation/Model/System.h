/*
* File: System.h
*
* Description: Record is an abstract type for model classes to inherit for database handling
*/

#ifndef SYSTEM_H
#define SYSTEM_H

#include "Record.h"

namespace Model
{
    class System : public Record
    {
    public:

        System() = delete;
        System(int major, int minor, int build) :
            MajorRev(major),
            MinorRev(minor),
            BuildNum(build)
        {

        }

        virtual ~System() {};
        
        int MajorRev;
        int MinorRev;
        int BuildNum;
    };

}

#endif /*SYSTEM_H*/
