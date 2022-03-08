#include <iostream>
using namespace std;

int main()
{
    int a,b=10,c=20,*p=&b,*q=&c;
    a=(*p)*(*q);
    cout<<a;
    return 0;
}
