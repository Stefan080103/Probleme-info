#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n;
    ofstream g;
    cin>>n;
    while(n>9 && n%10==n/10%10-1)
        n=n/10;
    g.open("fis.out");
    if(n>9)
        g<<0;
    else
        g<<1;
    g.close();
    return 0;
}
