#include <iostream>
#include <graphics.h>
#include <winbgim.h>
using namespace std;
struct punct{int x,y;};
void triangle(int n,punct A,punct B,punct C){
        delay(20);
        punct M,N,P;
        if(n){
            M.x=(A.x+B.x)/2;
            M.y=(A.y+B.y)/2;
            N.x=(C.x+B.x)/2;
            N.y=(C.y+B.y)/2;
            P.x=(A.x+C.x)/2;
            P.y=(A.y+C.y)/2;
            setcolor(13);
            line(M.x,M.y,N.x,N.y);
            setcolor(12);
            line(N.x,N.y,P.x,P.y);
            setcolor(14);
            line(P.x,P.y,M.x,M.y);
            triangle(n-1,A,M,P);
            triangle(n-1,P,N,C);
            triangle(n-1,M,B,N);

        }
}
int main()
{
    int n;
    cin>>n;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    punct A,B,C;
    A.x=320; A.y=10;
    B.x=10; B.y=470;
    C.x=630; C.y=470;
    setcolor(WHITE);
    line(A.x,A.y,B.x,B.y);
    setcolor(11);
    line(C.x,C.y,B.x,B.y);
    setcolor(10);
    line(A.x,A.y,C.x,C.y);
    triangle(n,A,B,C);
    delay(2000);
    outtextxy(200,250,"FRACTALI IN TRIUNGHI");
    delay(70);
    outtextxy(245,275,"DE Mihai Andrei ");
    delay(90);
    outtextxy(280,300,"SI Gherasim Antonie");
    getch();
    closegraph();
    return 0;
}
