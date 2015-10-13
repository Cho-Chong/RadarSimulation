/*
* File: Position.h
*
* Description: Position will contain the cartesian coordinate for whatever
*
*/

#ifndef POSITION_H
#define POSITION_H

#include "Record.h"

namespace Model
{
    class Position : public Record
    {
    public:
        Position() {}

    private:
        int x;
        int y;
    };
}

#endif /*POSITION_H*/
