#include <iostream>

using namespace std;

int main()
{
    int n,i,p=1,nr=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0) p=p*i;
        if(p%4==0) nr++,p=p/4;
    }
    cout<<nr;
    return 0;
}
