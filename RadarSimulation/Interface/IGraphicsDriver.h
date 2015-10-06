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
        IGraphicsDriver();
        virtual ~IGraphicsDriver();

        virtual void Display();

        virtual void Idle();

        virtual void Cleanup();
    };
}

#endif /*_IGRAPHICSDRIVER_H_*/
