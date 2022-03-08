#include <iostream>
using namespace std;
int main()
{
    int a=10;
    void *p;
    p=&a;
    cout<<*(int*)p<<endl;
    cout<<*(float*)p;
    return 0;
}
