#include <iostream>
using namespace std;
int main()
{
   int  b;
   cout<<"b natural=";
   cin>>b;
   while(b>0 && b%2!=0)
        b=b/10;
    if(b>0)
        cout<<"nu";
    else
        cout<<"da";
    return 0;
}
