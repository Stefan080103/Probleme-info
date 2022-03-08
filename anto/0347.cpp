#include <iostream>
using namespace std;
int main()
{
    int n,i;
    float a[1001];
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n/2;i++)
        if((int)a[i]==(int)a[n-i+1])
            cout<<a[i]<<" "<<a[n-i+1]<<endl;
    return 0;
}
