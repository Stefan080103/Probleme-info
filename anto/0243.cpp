#include <iostream>
using namespace std;
int main()
{
    int x,o,u;
    cout<<"numar natural="; cin>>x;
    o=0;
    while(x>0){
        u=x%10;
        if(u%2!=0)
            o=o*10+u;
        x=x/10;
   }
    if(o>0)
        cout<<o;
    else
        cout<<"numarul nu are cifre impare";
    return 0;
}
