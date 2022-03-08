#include <iostream>
#include <fstream>
using namespace std;
int n,a[121],m,b[121];
void citire(){
    cin>>n;
    int p,i;
    for(i=1;i<=n;i++)
        cin>>a[i];
    ifstream f("bac.in");
    while(f>>p)
        if(p>=1 && p<=n)
            b[p]=1;
    f.close();
}
int main()
{
    citire();
    int i;
    ofstream g("bac.out");
    for(i=1;i<=n;i++)
        if(b[a[i]]==0)
            g<<a[i]<<" ";
    g.close();
    return 0;
}
