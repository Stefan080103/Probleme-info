#include <iostream>
#include <fstream>
using namespace std;
int a[100];
int main()
{
    int x,m=0,M=0,i;
    ifstream f("bac.txt");
    while(f>>x)
        if(x<100)
            a[x]=1;
    for(i=10;i<99;i=i+2)
        if(a[i]==0)
        {
        m=i; break;
        }
   for(i=10;i<99;i=i+2)
        if(a[i]==0)
            M=i;
    if(m && M && m!=M)
        cout<<m<<" "<<M;
    else cout<<"Nu exista";
    return 0;
}
