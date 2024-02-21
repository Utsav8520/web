//Wap to draw 3 concentratic circles at the center of the screen 

#include<conio.h>
void main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C:\\VScode\\BGI");
    cleardevice();
    setcolour(white);
    circle(getmaxx()/2,getmaxy()/2,15);
    circle(getmaxx()/2,getmaxy()/2,20);
    circle(getmaxx()/2,getmaxy()/2,25);
    getch();
    closegraph();
}

// Draw an ecllipse 

#include<conio.h>
void drawcircle()
{
    setcolour(blue);
    circle(getmaxx()/2,getmaxy()/2,15);
    circle(getmaxx()/2,getmaxy()/2,20);
    circle(getmaxx()/2,getmaxy()/2,25);
}
void drawellipse()
{
    int radius=100;
    int x=getmaxx()/2,getmaxy()/2;
    char msg[]= "BCA";
    setcolor=(RED);
    ellipse(x,y,0,360,radius,radius/2);
    settextstyle(2,0,2);
    outtextxy(x-textwidth(msg)/2,y-textheight(msg)/2,msg);





}