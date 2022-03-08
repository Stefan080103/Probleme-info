#include <iostream>
using namespace std;
int x[60];
int div(int p,int q){
    if(p==q) return x[p];
    else {
        int m=(p+q)/2;
        if(div(p,m)>div(m+1,q))
            return div(p,m);
        else
            return div(m+1,q);
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
