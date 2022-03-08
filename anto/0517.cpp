#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i,j,b,a,c,s1,s2;
    cin>>s1>>s2;
    ofstream g("bac.txt");
    for(i=1;i<=9;i++)
        for(j=9;j>=0;j--)
            for(a=0;a<=9;a++)
                for(b=9;b>=0;b--)
                    for(c=0;c<=9;c++)
                        if(i+j==s1 && a+b==s2)
                            g<<i<<j<<c<<a<<b<<endl;
    g.close();
    return 0;
}
