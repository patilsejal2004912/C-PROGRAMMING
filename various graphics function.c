#include<graphics.h>

#include<stdio.h> #include<conio.h>

void main()
{
int gd=DETECT,gm;

line(50,40,190,40):

initgraph (&gd,&gm,"c:\\TurboC3\\BGI"); setbkcolor(GREEN): printf("\t\t\t\n\nLINE"); printf("\t\t\n\n\n\nRECTANGLE"); printf("\t\n\n\n\nCIRCLE"); circle(120,270,30); printf("\t\n\n\n\nECLIPSE"); ellipse(120,350,0,360,30,20):

rectangle(125,115,215,165);

printf("\t\t\t\n\n\n\n\n\n\nARC");

arc(120,200,180,0,30);

getch();
