#include <iostream>
#include <fstream>
using namespace std;
int a[1001];
int main()
{
    int x;
    ifstream f("bac.in");
    while(f>>x)
        a[x]++;
    f.close();
    int nr=0,i;
    for(i=0;i<=1000;i++)
        if(a[i]%2) nr++;
    if(nr<=1) cout<<"da";
    else cout<<"nu";
    return 0;
}
