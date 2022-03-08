#include <iostream>

using namespace std;

int main()
{
    int n=156,y=770;
    while(n*y>0)
                if(n>y) n=n%y;
                else y=y%n;
    cout<<y+n;
    return 0;
}
