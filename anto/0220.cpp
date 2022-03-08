#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"numar natural="; cin>>a;
    while(a>=100)
        a=a/10;
    cout<<a%10;
    return 0;
}
