#include <iostream>
using namespace std;
int main()
{
    int i,a,b,nr;
    cin>>a>>b;
    nr=0;
    for(i=a;i<=b;i++)
        if(i%2==0)
            nr=nr+1;
    cout<<nr;
    return 0;
}
