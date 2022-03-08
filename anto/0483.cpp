#include <iostream>
#include <fstream>
using namespace std;
void p2(int y,int &x){
    int f=2;
    x=0;
    while(y>1){
        if(y%f==0) x++;
        while(y%f==0) y=y/f;
        f++;
    }
}
int main()
{
    int Max=0,a,nr,A;
    ifstream f("f2.txt");
    while(f>>a){
        p2(a,nr);
        if(nr>Max){ Max=nr; A=a;}
    }
    f.close();
    cout<<A;
    return 0;
}
