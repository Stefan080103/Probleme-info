#include <iostream>

using namespace std;

int main()
{
    int n,i=2,nr=0,a[50];
    cin>>n;
    while(nr!=n){
        if(i%5)
            a[++nr]=i;
        i+=2;
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
