#include <iostream>

using namespace std;

int main()
{
    float x,y;
    int i,j;
    x=1.5;
    y=2.1;
    i=x;
    j=y+1;
    x=x*y+i/j;
    cout<<x;
    return 0;
}
