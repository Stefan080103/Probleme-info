#include <iostream>
#include <fstream>
using namespace std;
int n,a[101];
void citire(){
    ifstream f("bac.in");
    int x;
    while(f>>x)
        a[++n]=x;
    f.close();
}
int main()
{
    int i,Max;
    citire();
    Max=a[1];
    for(i=2;i<=n;i++)
        if(a[i]>Max)
            Max=a[i];
    for(i=1;i<=n;i++)
        if(a[i]!=Max)
            cout<<a[i]<<" ";
    return 0;
}
