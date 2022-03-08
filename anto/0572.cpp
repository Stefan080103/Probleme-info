#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i,j,a,b,p1,p2,c;
    cin>>p1>>p2;
    ofstream g("bac.out");
    for(i=9;i>=1;i--)
        for(j=9;j>=0;j--)
            for(a=9;a>=0;a--)
                for(b=9;b>=0;b--)
                    for(c=9;c>=0;c--)
                        if(i*j==p1 && a*b==p2)
                            g<<i<<j<<c<<c<<c<<a<<b<<endl;
    g.close();
    return 0;
}
