#include <iostream>
using namespace std;
int x[60];
int div (int p,int q){
    int s1,s2,m;
    if (p==q) if (x[p]%2==0) return 1;
                 else    return 0;
    else {
        m=(p+q)/2;
        s1=div(p,m);
        s2=div(m+1,q);
        return s1+s2;
    }
}
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>x[i];
    cout<<div(1,n);
    return 0;
}
