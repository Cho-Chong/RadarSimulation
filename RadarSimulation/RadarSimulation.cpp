// RadarSimulation.cpp : Defines the entry point for the application.
//

#include <stdarg.h>
#include <windows.h>
#include "glew.h"
#include <gl/GL.h>
#include <freeglut.h>

#include <functional>
#include "SimpleGraphicsDriver.h"
#include "GraphicsWrapper.h"
#include "Store\Store.h"
#include "System.h"

//TODO: move system revision
const int MAJOR_REV = 0;
const int MINOR_REV = 1;
const int BUILD_NUM = 1;


const char* APP_TITLE = "Radar Simulation";

void StartGlut(int argc, char* argv[]);

void InitializeRepo(Interface::IStore* store);

void AddSystemInfo(Interface::IStore* store);

int main(int argc, char* argv[])
{
    //TODO: move all this
    Interface::IStore* store = new Store::Store();

    InitializeRepo(store);
    AddSystemInfo(store);
    StartGlut(argc, argv);

    system("PAUSE");
    return 0;
}

void InitializeRepo(Interface::IStore* store)
{
    store->Open();
}

void AddSystemInfo(Interface::IStore* store)
{
    Model::System system(MAJOR_REV, MINOR_REV, BUILD_NUM);
    store->Add(system);
}

void StartGlut(int argc, char* argv[])
{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow(APP_TITLE);
    glEnable(GL_DEPTH_TEST);

    //TODO: could I use the fancy lambdas here?
    GraphicsHelper::SetGraphicsDriver(new Graphics::SimpleGraphicsDriver());
    glutDisplayFunc(GraphicsHelper::Display);
    glutIdleFunc(GraphicsHelper::Idle);
    glutCloseFunc(GraphicsHelper::Cleanup);

    glutMainLoop();
}
