#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,y,ok1=0,ok2=0,a;
    ifstream f("bac.txt");
    f>>x>>y;
    if(y<x) a=y,y=x,x=a;
    while(f>>a){
        if(x<a && ok1==0) cout<<x<<" ",ok1=1;
        if(y<a && ok2==0) cout<<y<<" ",ok2=1;
        cout<<a<<" ";
    }
    if(y>=a && ok2==0) cout<<y<<" ";
    f.close();
    return 0;
}
