#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, f;
    cout<<"x este egal cu "; cin>>x;
    if(x<=4)
        f=x-1;
    else
        if(x<10)
            f=x*x+sqrt(x+2);
        else
            f=x+1;
    cout<<"rezultatul functiei f este egal cu "<<f;
    return 0;
}
