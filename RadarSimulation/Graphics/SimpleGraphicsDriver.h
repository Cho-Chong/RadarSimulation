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
    class SimpleGraphicsDriver : public Interface::IGraphicsDriver
    {
    public:
        SimpleGraphicsDriver() {}
        ~SimpleGraphicsDriver() {}

        void Display();

        void Idle();

        void Cleanup();
    private:
        static void DrawCube();
    };
}

#endif /*_SIMPLEGRAPHICSDRIVER_H_*/
