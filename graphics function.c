#include
void main()
{
int gd= DETECT, gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
circle(200,100,10);
setcolor(WHITE);
getch();
closegraph();
}
#include
void main()
{
int gd= DETECT, gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
line(90,70,60,100);
line(200,100,150,300);
setcolor(WHITE);
getch();
closegraph();
}
#include
void main()
{
int gd= DETECT, gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
line(200,100,10,20);line(10,20,50,60);line(50,60,200,100);
setcolor(WHITE);
getch();
closegraph();
}

