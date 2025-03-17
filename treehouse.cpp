#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>

void init(void)
{
  glClearColor(1.0,1.0,1.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);


}

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);

    for (int i = 0; i <= 100; i++) {
        float angle = 2 * 3.1416 * i / 100;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}

void Draw()
{



    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 1, 0);
    circle(13, 13, 25, 25);
    circle(13, 13, 40, 15);
    circle(13, 13, 35, 20);
    circle(15, 15, 20, 30);
    circle(12, 12, 10, 30);
    circle(13, 13, 5, 40);
    circle(13, 13, -25, 25);
    circle(10, 10, -40, 15);
    circle(13, 13, -35, 20);
    circle(15, 15, -20, 30);
    circle(12, 12, -10, 30);
    glEnd();


   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(30, 0);
   glVertex2i(0, 20);
   glVertex2i(-30, 0);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(28, 0);
   glVertex2i(0, 18);
   glVertex2i(-28, 0);
   glEnd();

 glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-10, 10);
   glVertex2i(-20, 25);
   glVertex2i(-24, 25);
   glVertex2i(-14, 10);
   glEnd();
    glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-10, 10);
   glVertex2i(-9, 25);
   glVertex2i(-10, 25);
   glVertex2i(-12, 10);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(10, 10);
   glVertex2i(20, 20);
   glVertex2i(24, 20);
   glVertex2i(14, 10);
   glEnd();
    glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(10, 10);
   glVertex2i(9, 20);
   glVertex2i(10, 20);
   glVertex2i(12, 10);
   glEnd();


   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(26, -30);
   glVertex2i(26, 0);
   glVertex2i(-26, 0);
   glVertex2i(-26, -30);
   glEnd();





   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(5, -70);
   glVertex2i(4, -67);
   glVertex2i(3, -60);
   glVertex2i(3, -50);
   glVertex2i(4, -42);
   glVertex2i(-5, -41);
   glVertex2i(-4, -50);
   glVertex2i(-5, -60);
   glVertex2i(-7, -67);
   glVertex2i(-9, -70);
   glEnd();

   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-4, -42);
   glVertex2i(-10, -30);
   glVertex2i(-11, -30);
   glVertex2i(-5, -43);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-4, -42);
   glVertex2i(-2, -30);
   glVertex2i(-3, -30);
   glVertex2i(-5, -43);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-2, -42);
   glVertex2i(-0, -30);
   glVertex2i(-1, -30);
   glVertex2i(-3, -43);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(2, -42);
   glVertex2i(4, -30);
   glVertex2i(5, -30);
   glVertex2i(3, -43);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(4, -42);
   glVertex2i(10, -30);
   glVertex2i(11, -30);
   glVertex2i(5, -43);
   glEnd();













   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(25, -4);
   glVertex2i(25, -1);
   glVertex2i(-25, -1);
   glVertex2i(-25, -4);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(25, -8);
   glVertex2i(25, -5);
   glVertex2i(-25, -5);
   glVertex2i(-25, -8);
   glEnd();
    glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(25, -12);
   glVertex2i(25, -9);
   glVertex2i(-25, -9);
   glVertex2i(-25, -12);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(25, -16);
   glVertex2i(25, -13);
   glVertex2i(-25, -13);
   glVertex2i(-25, -16);
   glEnd();

   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(25, -20);
   glVertex2i(25, -17);
   glVertex2i(-25, -17);
   glVertex2i(-25, -20);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(25, -24);
   glVertex2i(25, -21);
   glVertex2i(-25, -21);
   glVertex2i(-25, -24);
   glEnd();
    glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(25, -28);
   glVertex2i(25, -25);
   glVertex2i(-25, -25);
   glVertex2i(-25, -28);
   glEnd();

    glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(25, -32);
   glVertex2i(25, -29);
   glVertex2i(-45, -29);
   glVertex2i(-45, -32);
   glEnd();


    glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-25, -20);
   glVertex2i(-25, -17);
   glVertex2i(-45, -17);
   glVertex2i(-45, -20);
   glEnd();



     glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-27, -30);
   glVertex2i(-27, -20);
   glVertex2i(-28, -20);
   glVertex2i(-28, -30);
   glEnd();
 glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-30, -30);
   glVertex2i(-30, -20);
   glVertex2i(-31, -20);
   glVertex2i(-31, -30);
   glEnd();

   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-33, -30);
   glVertex2i(-33, -20);
   glVertex2i(-34, -20);
   glVertex2i(-34, -30);
   glEnd();

   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-36, -30);
   glVertex2i(-36, -20);
   glVertex2i(-37, -20);
   glVertex2i(-37, -30);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-39, -30);
   glVertex2i(-39, -20);
   glVertex2i(-40, -20);
   glVertex2i(-40, -30);
   glEnd();

   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-42, -30);
   glVertex2i(-42, -20);
   glVertex2i(-43, -20);
   glVertex2i(-43, -30);
   glEnd();

   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-47, -70);
   glVertex2i(-42, -30);
   glVertex2i(-43, -30);
   glVertex2i(-48, -70);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-37, -70);
   glVertex2i(-32, -30);
   glVertex2i(-33, -30);
   glVertex2i(-38, -70);
   glEnd();

   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-37, -68);
   glVertex2i(-37, -66);
   glVertex2i(-47, -66);
   glVertex2i(-47, -68);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-37, -62);
   glVertex2i(-37, -60);
   glVertex2i(-47, -60);
   glVertex2i(-47, -62);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-35, -56);
   glVertex2i(-35, -54);
   glVertex2i(-45, -54);
   glVertex2i(-45, -56);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-35, -50);
   glVertex2i(-35, -48);
   glVertex2i(-45, -48);
   glVertex2i(-45, -50);
   glEnd();
   glColor3f(1, 1,0);
   glBegin(GL_POLYGON);
   glVertex2i(-35, -44);
   glVertex2i(-35, -42);
   glVertex2i(-45, -42);
   glVertex2i(-45, -44);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-33, -38);
   glVertex2i(-33, -36);
   glVertex2i(-43, -36);
   glVertex2i(-43, -38);
   glEnd();


glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(7, -22);
   glVertex2i(7, -8);
   glVertex2i(-7, -8);
   glVertex2i(-7, -22);
   glEnd();
   glColor3f(0, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(5, -15);
   glVertex2i(5, -10);
   glVertex2i(1, -10);
   glVertex2i(1, -15);
   glEnd();
   glColor3f(0, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-1, -15);
   glVertex2i(-1, -10);
   glVertex2i(-5, -10);
   glVertex2i(-5, -15);
   glEnd();
   glColor3f(0, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-1, -20);
   glVertex2i(-1, -16);
   glVertex2i(-5, -16);
   glVertex2i(-5, -20);
   glEnd();
   glColor3f(0, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(5, -20);
   glVertex2i(5, -16);
   glVertex2i(1, -16);
   glVertex2i(1, -20);
   glEnd();

    glColor3f(0, 1, 0);
    circle(10, 8, 5, -68);
    circle(10, 7, 3, -72);


    glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(50, -90);
   glVertex2i(50, -70);
   glVertex2i(-50, -70);
   glVertex2i(-50, -90);
   glEnd();
    glutSwapBuffers();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Lab Final");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
