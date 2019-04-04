#include<GL/glut.h>
void display()
{
	glClearColor(0.2,0.3,0.5,0.5);
	glClear(GL_QUADS);
glBegin(GL_POLYGON);
glColor3f(1.2,0.4,1.3);
glVertex2f(100,300);
glColor3f(1.0,0.7,0.9);
glVertex2f(100,100);
glColor3f(1.5,0.6,1.0);
glVertex2f(200,50);
glColor3f(0.7,0.4,1.5);
glVertex2f(200,250);



glBegin(GL_QUADS);

glColor3f(1.5,0.6,1.0);
glVertex2f(200,250);
glColor3f(1.8,0.5,0.2);
glVertex2f(300,300);
glColor3f(0.8,0.5,0.2);
glVertex2f(300,100);
glColor3f(1.5,0.6,1.0);
glVertex2f(200,50);


glBegin(GL_TRIANGLES);
glColor3f(1.0,0.7,0.9);
glVertex2f(100,300);
glColor3f(1.5,0.6,1.0);
glVertex2f(200,250);
glColor3f(0.7,0.4,1.5);
glVertex2f(150,350);


glBegin(GL_QUADS);

glColor3f(1.5,0.6,1.0);
glVertex2f(150,350);
glColor3f(1.8,0.5,0.2);
glVertex2f(100,250);
glColor3f(0.8,0.5,0.2);
glVertex2f(300,300);
glColor3f(1.5,0.6,1.0);
glVertex2f(200,250);
/*
glColor3f(0.5,0.2,0.7);
glVertex2f(300,300);
glColor3f(0.5,0.2,0.7);
glVertex2f(350,300);
*/
glEnd();
	glFlush();
}
int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);
	glutInitWindowSize(1386,786);
	glutInitWindowPosition(1036,786);
	glutCreateWindow("first program");
	gluOrtho2D(0.0,500.0,0.0,500.0);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
