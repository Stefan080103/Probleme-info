#include <iostream>
#include <fstream>
using namespace std;
int a,b,n,c[1001];
void citire(){
    int x;
    ifstream f("numere.in");
    f>>a>>b;
    while(f>>x)
        c[++n]=x;
    f.close();
}
int main()
{
    citire();
    int i;
    if(a>b){
        i=a;
        a=b;
        b=i;
    }
    ofstream g("numere.in");
    for(i=1;i<=n;i++)
        if(c[i]>=a && c[i]<=b)
            g<<c[i]<<" ";
    g.close();
    return 0;
}
