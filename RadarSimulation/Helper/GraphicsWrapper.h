/*
* File: GraphicsWrapper.h
*
* Description: A wrapper to call into an instantiated object's method
*
*/

#ifndef GRAPHICSWRAPPER_H
#define GRAPHICSWRAPPER_H

#include "IGraphicsDriver.h"

//TODO: hmmmm... is this indirection necessary?

// Perferring namespace encapsulation over object...
namespace GraphicsHelper
{
    void SetGraphicsDriver(Interface::IGraphicsDriver* driver);

    void Display();

    void Idle();

    void Cleanup();
}

#endif /*GRAPHICSWRAPPER_H*/
