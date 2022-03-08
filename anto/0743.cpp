#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a,n,u;
    ofstream g;
    cin>>a;
    n=a;
    u=a%10;
    while(n>10)
        n=n/10;
    g.open("cifre.out");
    g<<u+n;
    g.close();
    return 0;
}
