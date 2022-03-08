#include <iostream>
using namespace std;
int main()
{
    int a=1;
    void *p=&a;
    cout<<p;
    cout<<*p;
    return 0;
}
