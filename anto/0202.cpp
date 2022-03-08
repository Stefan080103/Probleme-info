#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, Max;
    cout<<"dati 4 numere naturale=";
    cin>>a>>b>>c>>d;
    Max=a;
    if(b>Max) Max=b;
    if(c>Max) Max=c;
    if(d>Max) Max=d;
    cout<<Max;
    return 0;
}
