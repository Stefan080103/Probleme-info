#include <iostream>
using namespace std;
int main()
{
    float a[1001];
    int n,i,j,nr=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n-1;i++)
        for(j=2+1;j<=n;j++)
            if(a[i]>a[j]){
                nr++;
                cout<<a[i]<<" "<<a[j]<<endl;
            }
    cout<<nr;
    return 0;
}
