#include <iostream>
#include <fstream>
using namespace std;
int a[101];
int main()
{
    int x,y,z,Max=0,nr=1,i;
    ifstream f("bac.txt");
    while(f>>x>>y>>z)
        a[x]=a[x]+y*z;
    f.close();
    Max=a[1];
    for(i=2;i<=100;i++)
        if(Max<a[i]) Max=a[i],nr=1;
        else if(Max==a[i]) nr++;
    cout<<Max<<" "<<nr;
    return 0;
}
