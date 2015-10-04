/*
* File: GraphicsDriver.h
*
* Description: This will contain API to control graphics
*
*/

#ifndef _GRAPHICSDRIVER_H_
#define _GRAPHICSDRIVER_H_

namespace Graphics
{
    class GraphicsDriver
    {
    public:
        GraphicsDriver() {}
        ~GraphicsDriver() {}

        static void Render();
    private:
        static void DrawCube();
    };
}

#endif /*_GRAPHICSDRIVER_H_*/