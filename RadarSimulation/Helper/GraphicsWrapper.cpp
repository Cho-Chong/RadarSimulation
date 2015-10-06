#include "GraphicsWrapper.h"

namespace GraphicsHelper
{
    static Interface::IGraphicsDriver* graphicsDriver;

    void SetGraphicsDriver(Interface::IGraphicsDriver* driver)
    {
        if (driver != nullptr)
        {
            graphicsDriver = driver;
        }
    }

    void Display()
    {
        graphicsDriver->Display();
    }

    void Idle()
    {
        graphicsDriver->Idle();
    }

    void Cleanup()
    {
        graphicsDriver->Cleanup();
    }
}
