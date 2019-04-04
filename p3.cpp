#include<GL/glut.h>

int a=50 ,b=50;
char str[]="VCETPUTTUR";

void keyboard(unsigned char key,int x,int y)
{
switch(key)
{
case'A':a=a-50;
	break;
case'D':a=a+50;
	break;
case'W':b=b+50;
	break;
case'S':b=b-50;
	break;
case'E':a=a+50;
	b=b+50;
break;
case'X':a=a+50;
	b=b-50;
break;
case'Q':a=a-50;
	b=b+50;
break;
case'Z':a=a-50;
	b=b-50;
break;

}

if(a==400||b==400){
a=400;

}

glutPostRedisplay();
}



void mouse(int button,int state,int x,int y)
{
if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
{
a=a-50;
}
else if(button == GLUT_RIGHT_BUTTON && state== GLUT_UP){
a=a+50;
}
else if(button == GLUT_MIDDLE_BUTTON && state == GLUT_DOWN){
a=a+50;
b=b-50;
}
glutPostRedisplay();
}


void display()
	{
	glClearColor(1.0,1.0,1.0,1.0);
glClear(GL_COLOR_BUFFER_BIT);

glColor3f(1.0,0.0,0.0);
glPointSize(5);
glBegin(GL_TRIANGLES);
glVertex2f(a,b);
glVertex2f(a+150,b);
glVertex2f(a+100,b+100);

glEnd();

glRasterPos2f(300,300);

for(char*i=str;*i!='\0';i++)
{
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18 , *i);
}


glFlush();
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
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutMainLoop();
	return 0;
}
