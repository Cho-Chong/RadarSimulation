/*
* File: IGraphicsDriver.h
*
* Description : An interface for abstracting away with the graphics handling
*
*/

#ifndef _IGRAPHICSDRIVER_H_
#define _IGRAPHICSDRIVER_H_

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

#endif /*_IGRAPHICSDRIVER_H_*/
