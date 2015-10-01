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

        void Render(HDC deviceHandle);
    private:
        void DrawCube(float x, float y, float z);
        void DrawHead(float x, float y, float z);
    };
}

#endif /*_GRAPHICSDRIVER_H_*/