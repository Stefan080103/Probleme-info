#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int y,ok=0,ok1=0,ok3=1,ok4=1,P,I;
    ifstream f("date.in");
    while(f>>y){
        if(ok==0)
            if(y%2==0)
                P=y,ok=1;
        if(ok1==0)
            if(y%2)
                I=y,ok1=1;
        if(ok==1)
            if(y%2==0)
                if(y<P) ok3=0;
        if(ok1==1)
            if(y%2)
                if(y>I) ok4=0;

    }
    f.close();
    if(ok3==0 || ok4==0) cout<<"nu";
    else cout<<"da";
    return 0;
}
