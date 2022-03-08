#include <iostream>
using namespace std;
int main()
{
    int a=10,*p=&a;
    ++*p;
    cout<<a;
    (*p)++;
    cout<<a;
    return 0;
}
