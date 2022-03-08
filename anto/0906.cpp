#include <iostream>
#include <fstream>
int a[101],c[101],n;
using namespace std;
struct numar{int a; int b;};
numar m[101];
int prima(int x){
    while(x/10%10)
        x=x/10;
    return x;
}
void citire(){
    ifstream f("f12.in");
    int x;
    while(f>>x){
        m[++n].a=x;
        m[n].b=prima(x);
    }
    f.close();
}
int main()
{
    citire();
    int i,j;
    ofstream g("f12.out");
    for(i=9;i>=0;i--)
        for(j=1;j<=n;j++)
            if(m[j].b==i)
                g<<m[j].a<<" ";
    g.close();
    return 0;
}
