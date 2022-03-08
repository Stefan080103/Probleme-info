#include <iostream>
using namespace std;
int main()
{
    int n,i,nr=0,p;
    cin>>n;
    while(n!=0){
        p=0;
        for(i=2;i*i<=n;i++)
            if(n%i==0){
                p=i;break;
            }
        if(n>1 && p==0)
            nr++;
        cin>>n;
    }
    cout<<nr;
    return 0;
}
