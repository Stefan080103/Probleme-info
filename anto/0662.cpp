#include <iostream>

using namespace std;

int main()
{
    int m,n,p;
    cin>>n;
    m=0;
    p=1;
    while(n>0){
        if(n%2!=0)
            n--;
        m=m+(n%10)*p;
        n=n/10;
        p=p*10;
    }
    cout<<m;
    return 0;
}
