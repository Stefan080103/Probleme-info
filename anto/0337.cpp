#include <iostream>

using namespace std;

int main()
{
    int a, b, c, x;
    a=3;
    b=5;
    c=7;
    if((a-b)/2<0)
        x=1;
    else
        if((a+b-c)/2<b)
        x=2;
        else
            if(a%b+c>b)
            x=3;
            else
            x=4;
    cout<<"x este egal cu"<<x;
    return 0;
}
