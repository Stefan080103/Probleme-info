#include <iostream>

using namespace std;

int main()
{
    int a=10,*p=&a,*q;
    q=0;
    cout<<*p<<" ";
    cout<<*p<<endl;
    q=NULL;
    cout<<*q;
    return 0;
}
