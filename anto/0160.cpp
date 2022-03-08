#include <iostream>
using namespace std;
int main()
{
    int a=10,*p=&a;
    *p=*p+5;
    cout<<a<<" "<<*p;
    return 0;
}
