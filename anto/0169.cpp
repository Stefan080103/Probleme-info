#include <iostream>
using namespace std;
int SDivizori(int x){
    int s=0,i;
    for(i=2;i<=x/2;i++)
        if(x%i==0) s=s+i;
    return s;
}
int main()
{
    int a[100],b[100],n,Max,i;
    cout<<"n= ";
    cin>>n;
    cout<<"introduceti "<<n<<" numere naturale= ";
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        b[i]=SDivizori(a[i]);
    Max=b[1];
    for(i=2;i<=n;i++)
      if(b[i]>Max) Max=b[i];
    for(i=1;i<=n;i++)
            if(Max==b[i]) cout<<a[i]<<" ";
    return 0;
}
