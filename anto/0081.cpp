#include <iostream>
#include <fstream>
using namespace std;
int gcd(long long int x,long long int y){
    while(x && y)
        if(x>y) x=x%y;
        else y=y%x;
    return x+y;
}
int main()
{
    ifstream f("gcd.in");
    long long int a,b;
    f>>a>>b;
    f.close();
    ofstream g("gcd.out");
    g<<gcd(a,b);
    g.close();
    return 0;
}
