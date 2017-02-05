#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<DOS.h>
#include<stdlib.h>

int main(void){
int i;
d
int gm,gd=DETECT,x,y;
int j;

initgraph(&gd,&gm,"\\TurboC3\\BGI");

line(0,215,getmaxx(),215);
getch();
for(i=0,j=0;i<500;i=i+10,j++){
line(0,215,getmaxx(),215);

//rectangle(100+i,100,150+i,150);
//line(-100+i,215,200+i,215);

line(10+i,150,15+i,100);
line(130+i,150,110+i,100);
line(15+i,100,110+i,100);
line(40+i,150,45+i,100);
rectangle(0+i,150,150+i,200);
circle(0+i,200,15);
circle(0+i,200,5);

circle(150+i,200,15);
circle(150+i,200,5);

setcolor(j);

delay(100);
clrscr();

}
getch();
return 0;
}

