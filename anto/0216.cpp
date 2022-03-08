#include <iostream>
using namespace std;
int main()
{
    int a, p;
    p=1;
    cout<<"numar natural"; cin>>a;
    do{
        p=p*(a%10);
        a=a/10;
    }while(a!=0);
    cout<<p;
}
