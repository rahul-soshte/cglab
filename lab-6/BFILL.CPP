
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void fill_right(int x,int y);
void fill_left(int x,int y);
void main()
{
                int gd=DETECT,gm,x,y,n,i;
                clrscr();
                initgraph(&gd,&gm,"c:\\turboc3\\bgi");
                printf("*** Boundary Fill algorithm ***");
                /*- draw object -*/
                line (50,50,200,50);
                line (200,50,200,300);
                line (200,300,50,300);
                line (50,300,50,50);
                /*- set seed point -*/
                x=100;   y=100;
                fill_right(x,y);
                fill_left(x-1,y);
                getch();
}
void fill_right(int x,int y)
{
                if((getpixel(x,y) != WHITE)&&(getpixel(x,y) != RED))
                {
                                putpixel(x,y,RED);
                                fill_right(++x,y);   x=x-1;
                                fill_right(x,y-1);
                                fill_right(x,y+1);
                }
                delay(1);
}
void fill_left(int x,int y)
{
                if((getpixel(x,y) != WHITE)&&(getpixel(x,y) != RED))
                {
                                putpixel(x,y,RED);
                                fill_left(--x,y);    x=x+1;
                                fill_left(x,y-1);
                                fill_left(x,y+1);
                }
                delay(1);
}

