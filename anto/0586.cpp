#include <iostream>
#include <fstream>
using namespace std;
int cmmdc(int a,int b){
    while(a && b)
        if(a>b) a=a%b;
        else b=b%a;
    return a+b;
}
int main()
{
    int n,v[101],a,i;
    ifstream f("numere.in");
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    f>>a;
    f.close();
    ofstream g("numere.out");
    for(i=1;i<=n;i++)
        if(cmmdc(v[i],a)==1)
            g<<v[i]<<" ";
    g.close();
    return 0;
}
