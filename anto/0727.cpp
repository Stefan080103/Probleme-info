#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a, u, n,b,v;
    float Max;
    ofstream g;
    cin>>a;
    Max=-1;  b=a;
    do{
        u=a%10;
        if(u>Max)
            Max=u;
        a=a/10;
    }while(a!=0);
    n=0;
    do{
        v=b%10;
        if(v==Max)
            n++;
        b=b/10;
    }while(b!=0);
    g.open("maxim.txt");
    g<<Max<<endl<<n;
    g.close();
    return 0;
}
