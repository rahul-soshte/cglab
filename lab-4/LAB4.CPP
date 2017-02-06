#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(){
float m;

int p0;
int gd=DETECT,gm;
int i;
int x,y;
int x1,y1,x2,y2;
int dx,dy;
initgraph(&gd,&gm,"\\TurboC3\\BGI");

printf("Enter the x-coordinate of P1 --------x1");
scanf("%d",&x1);
printf("Enter the y-coordinate of P1------y1");
scanf("%d",&y1);
printf("Enter the x-coordinate of P2 --------x2");
scanf("%d",&x2);
printf("Enter the y-coordinate of P2-------y2");
scanf("%d",&y2);

putpixel(x1,y1,15);

dx=x2-x1;
dy=y2-y1;
//Decision parameter
m=(float)dy/dx;

p0=2*dy-dx;

if(m>=1.0)
printf("Algorithm is no applicable");
else{
while(x1<=x2){
if(p0<0)
{
x=x+1;
y=y;

p0=p0+2*dy;
}
else{
x=x+1;
y=y+1;

p0=p0+2*dy-2*dx;

}
putpixel(x,y,15);

}
}


 getch();
 return 0;

}