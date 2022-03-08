#include <iostream>
using namespace std;
int main()
{
    int a, s;
    s=0;
    cout<<"numar natural"; cin>>a;
    do{
        s=s+a%10;
        a=a/10;
    }while(a>0);
    cout<<s;
}
