#include <iostream>
using namespace std;
int main()
{
    int a, Min;
    cout<<"numar natural="; cin>>a;
    Min=a%10;
    a=a/10;
    while(a>0){
        if(Min>a%10)
            Min=a%10;
        a=a/10;}
    cout<<Min;
}
