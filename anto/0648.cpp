#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a,s;
    char c;
    ifstream f("bac.in");
    f>>a;
    s=a;
    while(f>>c>>a)
        if(c=='+') s+=a;
        else s-=a;
    cout<<s;
    return 0;
}
