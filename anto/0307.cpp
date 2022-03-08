#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int m, n, x, i,ok=1, d=2, p;
    long long P=1, y=P;
    ifstream f("seminte.in");
    f>>m>>n;
    for(i=1;i<=n;i++){
        f>>x;
        P=P*x;
    }
    f.close();
    while(P>1){
        p=0;
        while(P%d==0){
            p++;
            P=P/d;
        }
        if(p%m!=0){
            ok=0;
            break;
        }
        d++;
    }
    ofstream g("seminte.out");
    g<<ok;
    if(ok==1)
        g<<endl;
    d=2;
    while(y>1){
        p=0;
        while(y%d==0){
            p++;
            y=y/d;
        }
        if(p>0)
            g<<d<<' '<<p<<endl;
        d++;
    }
    g.close();
    return 0;
}
