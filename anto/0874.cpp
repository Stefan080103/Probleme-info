#include <iostream>
using namespace std;
int main()
{
    int x=0,n;
    cout<<"n=";
    cin>>n;
    while((n&(1<<x))==0) x++;
    cout<<(1<<x);
    n=n&(n-1);
    while(n){
        x++;
        while((n&(1<<x))==0) x++;
        cout<<'+'<<(1<<x);
        n=n&(n-1);
    }
    return 0;
}
