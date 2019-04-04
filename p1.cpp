#include<GL/glut.h>
void display()
{
	glClearColor(0.9,0.8,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0,0.0,0.0);
glLineWidth(10.0);
glBegin(GL_LINES);
glVertex2f(100.0,100.0);
glVertex2f(200.0,100.0);
glVertex2f(150.0,150.0);
glVertex2f(200.0,100.0);
glVertex2f(100.0,100.0);
glVertex2f(150.0,150.0);
glEnd();

glBegin(GL_LINE_LOOP);
glVertex2f(100.0,100.0);
glVertex2f(150.0,150.0);
glVertex2f(100.0,200.0);
glVertex2f(150.0,200.0);
glVertex2f(100.0,300.0);
glVertex2f(150.0,250.0);
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
