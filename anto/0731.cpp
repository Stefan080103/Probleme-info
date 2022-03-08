#include <iostream>
#include <fstream>
using namespace std;

int main()
{
int m, n, x, y, z;
ifstream f;
ofstream g;
f.open("intrare2.txt");
f>>x;
f.close();
x>10;
m=x%100/10;
n=x%10;
g.open("iesire2.txt");
if(m==n){
    y=x+1;
    z=x+2;
    g<<y<<z;}
else
    if(m>n) g<<m;
    else g<<n;
g.close();
    return 0;
}
