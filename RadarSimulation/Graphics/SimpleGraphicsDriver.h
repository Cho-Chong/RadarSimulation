/*
* File: SimpleGraphicsDriver.h
*
* Description: A simple graphics driver for testing/playing
*
*/

#ifndef SIMPLEGRAPHICSDRIVER_H
#define SIMPLEGRAPHICSDRIVER_H

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

#endif /*SIMPLEGRAPHICSDRIVER_H*/
