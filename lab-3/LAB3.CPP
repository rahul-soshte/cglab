#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

void dda(int,int,int,int);

int main()
{
int gd=DETECT,gm;

int x1,y1,x2,y2;
printf("enter the x-coordinate------x1 ");
scanf("%d",&x1);
printf("enter the y-coordinate--------y1 ");
scanf("%d",&y1);
printf("Enter the x-coordinate---------x2 ");
scanf("%d",&x2);
printf("Enter the y-coordinate---------y2 ");
scanf("%d",&y2);

initgraph(&gd,&gm,"\\TurboC3\\BGI");
dda(x1,y1,x2,y2);
 getch();

 return 0;

}
void dda(int x1,int y1,int x2,int y2){
int i,dx,dy,steps;
float x,y;
float xinc,yinc;

dx=x2-x1;
dy=y2-y1;
if(abs(dx)>=abs(dy))
steps=dx;

else steps=dy;

xinc=(float)dx/steps;

yinc=(float)dy/steps;

x=x1;
y=y1;
putpixel(x,y,15);
for(i=1;i<steps;i++)
{
x=x+xinc;
y=y+yinc;
x1=x+0.5;
y1=y+0.5;
putpixel(x,y,15);
}

}



