#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int p1,p2,i,j,a,b,y;
    cin>>p1>>p2;
    ofstream g("bac.out");
    for(i=1;i<=9;i++)
        for(j=0;j<=9;j++)
            for(a=0;a<=9;a++)
                for(b=0;b<=9;b++)
                    for(y=0;y<=9;y++)
                        if(p1==i*j && p2==a*b)
                            g<<i<<j<<y<<y<<y<<a<<b<<endl;
    g.close();
    return 0;
}
