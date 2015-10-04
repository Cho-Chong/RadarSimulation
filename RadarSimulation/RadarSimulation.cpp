// RadarSimulation.cpp : Defines the entry point for the application.
//

#include <stdarg.h>
#include <windows.h>
#include "glew.h"
#include <gl/GL.h>
#include "freeglut.h"

#include <functional>
#include "GraphicsDriver.h"

const char* APP_TITLE = "Radar Simulation";

static Graphics::GraphicsDriver graphDriver;

void StartGlut(int argc, char* argv[]);

int main(int argc, char* argv[])
{
    StartGlut(argc, argv);

    return 0;
}

void StartGlut(int argc, char* argv[])
{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow(APP_TITLE);
    glEnable(GL_DEPTH_TEST);

    glutDisplayFunc(&graphDriver.Render);
    glutIdleFunc(&graphDriver.Render);
    glutMainLoop();
}
