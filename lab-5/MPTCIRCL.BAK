#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
int gd=DETECT,gm=DETECT;
int r,x,y,midx,midy;
float p;
clrscr();
initgraph(&gd,&gm,"\\TURBOC3\\BGI");
printf("Enter the Radius of Circle");
scanf("%d",&r);
x=0;
y=r;
p=1.25-r;
midx=getmaxx()/2;
midy=getmaxy()/2;

do{
 putpixel(midx+x,midy+y,1);
 putpixel(midx-x,midy-y,2);
 putpixel(midx-x,midy+y,3);
 putpixel(midx+x,midy-y,4);
 putpixel(midx+y,midy+x,5);
 putpixel(midx+y,midy-x,6);
 putpixel(midx-y,midy-x,7);
 putpixel(midx-y,midy+x,8);

 delay(20);

 x++;
 if(p<0)
 {
 p=p+2*x+1;

 }
 else
 {
 y--;
 //y decrements only when p>=0
 p=p+2*(x-y)+1;

}
 }while(x<=y);
 getch();
 closegraph();

 }
