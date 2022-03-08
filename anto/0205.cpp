#include <iostream>

using namespace std;

int main()
{
    int x, y, a, b;
    cout<<"numarul x este egal cu"; cin>>x;
    cout<<"numarul y este egal cu"; cin>>y;
    if(x>y) {
        a=x;
        b=y;
    }
    else {
        a=y;
        b=x;
    }
    cout<<"a este egal cu"<<a;
    cout<<"b este egal cu"<<b;
    return 0;
}
