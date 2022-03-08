#include <iostream>
using namespace std;
int main()
{
    int x=0,k,n;
    cout<<"n="; cin>>n;
    while(n!=0){
        while((n&(1<<x))==0) x++;
        k=x; x++;
        n=n&(n-1);
    }
    cout<<(1<<k+1);
    return 0;
}
