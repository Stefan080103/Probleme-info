#include <iostream>

using namespace std;

int main()
{
    int a=10,*p=&a;
    *p+=1;
    cout<<a;
    return 0;
}
