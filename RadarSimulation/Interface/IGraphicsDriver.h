/*
* File: IGraphicsDriver.h
*
* Description : An interface for abstracting away with the graphics handling
*
*/

#ifndef IGRAPHICSDRIVER_H
#define IGRAPHICSDRIVER_H

namespace Interface
{
    class IGraphicsDriver
    {
    public:
        virtual ~IGraphicsDriver() {};

        virtual void Display() = 0;

        virtual void Idle() = 0;

        virtual void Cleanup() = 0;
    };
}

#endif /*IGRAPHICSDRIVER_H*/
