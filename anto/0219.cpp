#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"numar natural="; cin>>a;
    while(a>=10)
        a=a/10;
    cout<<a;
    return 0;
}
