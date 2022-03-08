#include <iostream>
#include <graphics.h>
#include <winbgim.h>
void dreptunghi(int xA,int yA,int xB,int yB,int xC,int yC,int xD,int yD ){
    line(xA,yA,xB,yB);
    line(xB,yB,xC,yC);
    line(xC,yC,xD,yD);
    line(xA,yA,xD,yD);
}
void triunghi(int xA,int yA,int xB,int yB,int xC,int yC){
     line(xA,yA,xB,yB);
    line(xB,yB,xC,yC);
    line(xC,yC,xA,yA);
}
int main()
{
  initwindow(800,600);
  int x = 600, y = 150, r;
  for (r = 25; r <= 125; r += 20)
      circle(x, y, r);
    int i;
    for(i=0;i<=400;i+=20)
        line(400,300,i,600);
    y=300;int X=800,Y=600;
    for(x=450;x<=550;x+=20){
            y+=20,X-=20,Y-=20;
        dreptunghi(x,y,X,y,X,Y,x,Y);
    }
    for(x=0;x<=400;x+=50)
        line(x,0,x,300);
    for(y=0;y<=300;y+=50)
        line(0,y,400,y);
    for(i=0;i<=400;i+=20)
        line(200,450,i,300);
    Y=600,y=300,X=200;
   for(x=0;x<=50;x+=10)
    {
        Y-=10,X-=10,y+=10;
        triunghi(x,y,x,Y,X,450);
    }
  getch(); closegraph(); return 0;
}
