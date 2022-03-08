#include <iostream>
using namespace std;
int main()
{
    int n , Max;
    cin>>n;
    Max=0;
    do{
        n=n/10;
        if(Max<n%10)
            Max=n%10;
    }while(n==0);
    cout<<Max;
    return 0;
}
