#include <iostream>

using namespace std;

int main()
{
    float D ,H , v;
    cin>>D>>H>>v;
    v=D/H;
    v=D*1000/H*3600;
    v=(D*1000/H*3600)/H;
    cout<<v;
    return 0;
}
