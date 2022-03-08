#include <iostream>
using namespace std;
int main()
{
    int b;
    cin>>b;
    while(b>9 && b%10==b/10%10+1)
        b=b/10;
    if(b>9)
        cout<<"Nu";
    else
        cout<<"Da";
    return 0;
}
