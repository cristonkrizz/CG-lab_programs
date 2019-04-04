#include<GL/glut.h>

int a=50,b=175;
char str[]="Click here XD ";
void display1()
	{
	glClearColor(0.0,1.0,0.0,1.0);
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0,0.0,1.0);
glPointSize(5);
glEnd();
glRasterPos2f(300,300);
for(char*i=str;*i!='\0';i++)
{
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18 , *i);
}
glFlush();
}

void keyboard(unsigned char key,int x,int y)
{
switch(key)
{
case'A':a=a-50;
	break;
case'D':a=a+50;
	break;
}

glutPostRedisplay();
}

void display2()
	{
glClearColor(0.0,0.0,0.0,1.0);
glClear(GL_COLOR_BUFFER_BIT);
//river
glColor3f(0.0,0.7,1.0);
glBegin(GL_QUADS);
glVertex2f(0.0,150.0);
glVertex2f(0.0,0.0);
glVertex2f(500.0,0.0);
glVertex2f(500.0,150.0);
glEnd();
//boat
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(a,b);
glVertex2f(a+100,b-75);
glVertex2f(a+350,b-75);
glVertex2f(a+400,b);
glEnd();
a=a+1;

if(a==500){
a=450;
}

glFlush();
}



void mouse(int button,int state,int x,int y)
{
if(button==GLUT_LEFT_BUTTON)
{

	glutDisplayFunc(display2);
	glutIdleFunc(display2);
	
}
glutPostRedisplay();
}
int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);
	glutInitWindowSize(400,400);
	glutInitWindowPosition(50,50);
	glutCreateWindow("first program");
	gluOrtho2D(0.0,500.0,0.0,500.0);
	glutDisplayFunc(display1);
	glutMouseFunc(mouse);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}

