#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n;
    ifstream f;
    ofstream g;
    f.open("natural.txt");
    f>>n;
    f.close();
    while(n>9 && n%10<n/10%10)
        n=n/10;
    g.open("des.txt");
    if(n>9)
        g<<0;
    else
        g<<1;
    g.close();
    return 0;
}
