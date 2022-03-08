#include <iostream>

using namespace std;

int main()
{
    int a=10,*p,*q;
    p=&a;
    q=p;
    cout<<*p<<" "<<*q;
    return 0;
}
