#include <iostream>

using namespace std;

int main()
{
    int a=10,b=20,*p;
    p=&a;
    b=*p;
    cout<<a<<" "<<b;
    *p=100;
    cout<<a<<" "<<b;
    return 0;
}
