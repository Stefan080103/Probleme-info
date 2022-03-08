#include <iostream>
using namespace std;
// 1221 2112    2112    1221    2112    2112    1221
int a[]={0,1,2,2,1,2,1,1,2,2,1,1,2};
int main()
{
    int n,i,s,r,j;
    cin>>n;
    s=n/12;
    r=n%12;
    for(j=1;j<=s;j++)
        for(i=1;i<=12;i++)
            cout<<a[i];
    for(i=1;i<=r;i++) cout<<a[i];
    cout<<endl;
    if(n%12==0) cout<<a[12];
    else cout<<a[n%12];
    return 0;
}
