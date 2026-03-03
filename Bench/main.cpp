#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.5f, 0.5f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.9f, -0.2f);
    glVertex2f(0.8f, 0.0f);
    glVertex2f(0.2f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.5f, 0.5f);
    glVertex2f(0.2f, 0.1f);
    glVertex2f(0.8f, 0.1f);
    glVertex2f(0.8f, 0.3f);
    glVertex2f(0.2f, 0.3f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.5f, 0.5f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.35f, 0.0f);
    glVertex2f(0.35f, 0.1f);
    glVertex2f(0.3f, 0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.5f, 0.5f);
    glVertex2f(0.65f, 0.0f);
    glVertex2f(0.7f, 0.0f);
    glVertex2f(0.7f, 0.1f);
    glVertex2f(0.65f, 0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.5f, 0.5f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.25f, -0.4f);
    glVertex2f(0.25f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.5f, 0.5f);
    glVertex2f(0.75f, -0.4f);
    glVertex2f(0.8f, -0.4f);
    glVertex2f(0.8f, -0.2f);
    glVertex2f(0.75f, -0.2f);
    glEnd();


    glFlush();

}

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("BENCH");
    glutInitWindowSize(700, 700);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

