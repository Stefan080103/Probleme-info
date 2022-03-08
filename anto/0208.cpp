#include <iostream>

using namespace std;

int main()
{
    float x, y, z, a;
    cin>>x>>y>>z;
    if(x<y)
        if(x<z)
            a=x;
        else
            a=z;
     else
        if(y<z)
            a=y;
        else
            a=z;
    cout<<a;
    return 0;
}
