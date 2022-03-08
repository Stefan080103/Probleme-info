#include <iostream>
using namespace std;
int main()
{
    float a[1001];
    int n,i,b;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=n;i>=1;i--){
        b=a[i]*10;
        if(b%10<5)
            a[i]=(int)a[i];
        else
             a[i]=(int)a[i]+1;
        cout<<a[i]<<" ";
    }
    return 0;
}
