#include "stdafx.h"
#include "GraphicsDriver.h"
#include <Windows.h>
#include <glew.h>

using namespace Graphics;

void GraphicsDriver::Render(HDC deviceHandle)
{
    /*      Enable depth testing
    */
    glEnable(GL_DEPTH_TEST);

    /*      Heres our rendering. Clears the screen
    to black, clear the color and depth
    buffers, and reset our modelview matrix.
    */
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glPushMatrix();
    glLoadIdentity();

    /*      Move to 0,0,-30 , rotate the robot on
    its y axis, draw the robot, and dispose
    of the current matrix.
    */
    glTranslatef(0.0f, 0.0f, -30.0f);
    glRotatef(1.0f, 0.0f, 1.0f, 0.0f);
    DrawHead(1.0f, 2.0f, 3.0f);
    glPopMatrix();

    glFlush();

    /*      Bring back buffer to foreground
    */
    SwapBuffers(deviceHandle);
}

void GraphicsDriver::DrawHead(float xPos, float yPos, float zPos)
{
    glPushMatrix();

    /*      Sets color to white*/
    glColor3f(1.0f, 1.0f, 1.0f);
    glTranslatef(xPos, yPos, zPos);

    /*      Creates 2 x 2 x 2 cube*/
    glScalef(2.0f, 2.0f, 2.0f);
    DrawCube(0.0f, 0.0f, 0.0f);

    glPopMatrix();
}

void GraphicsDriver::DrawCube(float xPos, float yPos, float zPos)
{
    glPushMatrix();
    glBegin(GL_POLYGON);

    /*      This is the top face*/
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, -1.0f);
    glVertex3f(-1.0f, 0.0f, -1.0f);
    glVertex3f(-1.0f, 0.0f, 0.0f);

    /*      This is the front face*/
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(-1.0f, 0.0f, 0.0f);
    glVertex3f(-1.0f, -1.0f, 0.0f);
    glVertex3f(0.0f, -1.0f, 0.0f);

    /*      This is the right face*/
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, -1.0f, 0.0f);
    glVertex3f(0.0f, -1.0f, -1.0f);
    glVertex3f(0.0f, 0.0f, -1.0f);

    /*      This is the left face*/
    glVertex3f(-1.0f, 0.0f, 0.0f);
    glVertex3f(-1.0f, 0.0f, -1.0f);
    glVertex3f(-1.0f, -1.0f, -1.0f);
    glVertex3f(-1.0f, -1.0f, 0.0f);

    /*      This is the bottom face*/
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, -1.0f, -1.0f);
    glVertex3f(-1.0f, -1.0f, -1.0f);
    glVertex3f(-1.0f, -1.0f, 0.0f);

    /*      This is the back face*/
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(-1.0f, 0.0f, -1.0f);
    glVertex3f(-1.0f, -1.0f, -1.0f);
    glVertex3f(0.0f, -1.0f, -1.0f);

    glEnd();
    glPopMatrix();
}
