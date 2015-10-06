/*
* File: SimpleGraphicsDriver.h
*
* Description: A simple graphics driver for testing/playing
*
*/

#ifndef _SIMPLEGRAPHICSDRIVER_H_
#define _SIMPLEGRAPHICSDRIVER_H_

#include "IGraphicsDriver.h"

namespace Graphics
{
    class SimpleGraphicsDriver : Interface::IGraphicsDriver
    {
    public:
        SimpleGraphicsDriver() {}
        ~SimpleGraphicsDriver() {}

        static void Display();
        static void Idle();
        static void Cleanup();
    private:
        static void DrawCube();
    };
}

#endif /*_SIMPLEGRAPHICSDRIVER_H_*/