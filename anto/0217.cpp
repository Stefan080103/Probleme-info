#include <iostream>
using namespace std;
int main()
{
    int a, Max;
    cout<<"numar natural="; cin>>a;
    Max=a%10;
    a=a/10;
    while(a>0){
        if(Max<a%10)
            Max=a%10;
        a=a/10;}
    cout<<Max;
}
