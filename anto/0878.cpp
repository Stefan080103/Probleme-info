#include <iostream>
#include <fstream>
using namespace std;
ifstream f;
struct punct{int x,y;};
punct citire(){
    punct alfa;
    f>>alfa.x;
    f>>alfa.y;
    return alfa;
}
void schimb(punct &p1, punct &p2){
    punct aux=p1;p1=p2;p2=aux;
}
int main()
{
    punct *p,*q,*z;
    p=new punct;
    q=new punct;
    z=new punct;
    f.open("fis.txt");
    *p=citire();
    *q=citire();
    *z=citire();
    f.close();
    if((*p).x>(*q).x)
        schimb(*p,*q);
    if((*p).x>(*z).x)
        schimb(*p,*z);
    if((*q).x>(*z).x)
        schimb(*q,*z);
    cout<<(*p).x<<" "<<(*p).y<<endl;
    cout<<(*q).x<<" "<<(*q).y<<endl;
    cout<<(*z).x<<" "<<(*z).y;
    delete p;
    delete q;
     delete z;
    return 0;
}
