#include <iostream>
using namespace std;
int main()
{
    int n,i,x,Max;
    cin>>n;
    cin>>Max;
    for(i=2;i<=n;i++){
        cin>>x;
        if(x>Max)
            Max=x;
    }
    cout<<Max;
    return 0;
}
