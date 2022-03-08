#include <iostream>

using namespace std;

int main()
{
    int a=1,b=2,*p=&a;
    (*(p=&b))++;
    cout<<a<<" "<<b;
    return 0;
}
