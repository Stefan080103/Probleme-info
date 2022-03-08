#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<=0) cout<<"nu";
        else if((n&(n-1))==0)
                cout<<"da";
             else cout<<"nu";
    return 0;
}
