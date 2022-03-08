#include <iostream>
using namespace std;
int x[60];
int div (int p,int q){
    if (p==q) if (x[p]%2==0) return 1;
                 else    return 0;
    else return div(p,(p+q)/2)+div((p+q)/2+1,q);
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
