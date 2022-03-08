#include <iostream>

using namespace std;

int main()
{
    int n,m,k,p,x,c,i;
    cin>>n;
    p=1; m=k=0;
    while(n){
        cin>>x;
        for(i=1;i<=k;i++)
            x=x/10;
        if(x) c=x%10;
        else c=n%10;
        m=c*p+m;
        n=n/10;
        p=p*10;
        k++;
    }
    cout<<m;
    return 0;
}
