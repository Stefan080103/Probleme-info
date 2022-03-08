#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int m;
    ifstream f;
    ofstream g;
    f.open("natural.txt");
    f>>m;
    f.close();
    while(m>9 && m%10>m/10%10)
        m=m/10;
    g.open("cresc.txt");
    if(m>9)
        g<<0;
    else
        g<<1;
    g.close();
    return 0;
}
