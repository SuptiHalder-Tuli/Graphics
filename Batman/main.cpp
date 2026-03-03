#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);

    glVertex2f(-0.8f, 0.0f);
    glVertex2f(-0.6f, 0.2f);
    glVertex2f(-0.3f, 0.25f);
    glVertex2f(-0.15f, 0.1f);
    glVertex2f(-0.05f, 0.15f);
    glVertex2f(0.0f, 0.25f);
    glVertex2f(0.05f, 0.15f);
    glVertex2f(0.15f, 0.1f);
    glVertex2f(0.3f, 0.25f);
    glVertex2f(0.6f, 0.2f);
    glVertex2f(0.8f, 0.0f);
    glVertex2f(0.6f, -0.15f);
    glVertex2f(0.3f, -0.1f);
    glVertex2f(0.15f, -0.25f);
    glVertex2f(0.0f, -0.15f);
    glVertex2f(-0.15f, -0.25f);
    glVertex2f(-0.3f, -0.1f);
    glVertex2f(-0.6f, -0.15f);

    glEnd();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Batman Logo");
    glutInitWindowSize(700, 700);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
