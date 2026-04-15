
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
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.25f, -0.3f);
    glVertex2f(0.25f, 0.3f);
    glVertex2f(0.2f, 0.3f);
    glEnd;





    glFlush();

}

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Lamp");
    glutInitWindowSize(700, 700);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
