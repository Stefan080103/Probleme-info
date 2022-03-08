#include <iostream>
using namespace std;
int main()
{
    int n,x,i,s=0,j,p,a;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        a=x;
        p=0;
        for(j=2;j*j<=x;j++)
            if(x%j==0){
                p=j;break;
            }
        if(x>1 && p==0)
            s=s+a;
    }
    cout<<s;
    return 0;
}
