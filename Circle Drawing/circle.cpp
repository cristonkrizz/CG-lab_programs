#include<GL/glut.h>
#include<stdio.h>
GLint i;
GLint xc,yc,r;
void draw_pixel(GLint m,GLint n)
{
	glColor3f(1.0,0.0,0.0);
	glPointSize(2.0);
	glBegin(GL_POINTS);
	glVertex2i(m,n);
	glEnd();
}

void plotpixels(GLint h,GLint k,GLint x,GLint y)
{
	draw_pixel(x+h,y+k);
	draw_pixel(-x+h,y+k);
	draw_pixel(x+h,-y+k);
	draw_pixel(-x+h,-y+k);
	draw_pixel(y+h,x+k);
	draw_pixel(-y+h,x+k);
	draw_pixel(y+h,-x+k);
	draw_pixel(-y+h,-x+k);
}

void circle(GLint h,GLint k,GLint r)
{
GLint d=1-r,x=0,y=r;
plotpixels(h,k,x,y);
while(y>x)
{
	if(d<0)
	{
	d+=2*x+3;
	}
	else
	{
	d+=2*(x-y)+5;
	--y;
	}
++x;
plotpixels(h,k,x,y);
}
}
void display()
{
glClearColor(1.0,1.0,1.0,1.0);
glClear(GL_COLOR_BUFFER_BIT);
for(int i=50;i>=0;i--){
circle(xc,yc,i);
}

glFlush();
}
int main(int argc,char**argv)
{
printf("Enter the centr and radius of the circle:\n");
scanf("%d%d%d",&xc,&yc,&r);
glutInit(&argc,argv);
glutInitWindowSize(500,500);
glutCreateWindow("Circle");
gluOrtho2D(0.0,400.0,0.0,300.0);
glutDisplayFunc(display);
glutMainLoop();
	return 0;
	}
