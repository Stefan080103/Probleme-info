#include <iostream>

using namespace std;
int c[10000];
int main()
{
    int na,nb,a[100],b[100],i;
    cin>>na;
    for(i=1;i<=na;i++)
        cin>>a[i];
    cin>>nb;
    for(i=1;i<=nb;i++)
        cin>>b[i];
    for(i=1;i<=na;i++)
        c[a[i]]++;
    for(i=1;i<=nb;i++)
        c[b[i]]++;
    int nr=0;
    for(i=1;i<=10000;i++)
        if(c[i]==2)
            nr++;
    cout<<nr;
    return 0;
}
