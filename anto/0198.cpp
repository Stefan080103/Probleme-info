#include <iostream>

using namespace std;

int main()
{
    int a, b, d, s;
    cin>>a;
    b=a/1000%10;
    d=a%100/10;
    s=b+d;
    cout<<b<<endl<<d<<endl<<s;
    return 0;
}
