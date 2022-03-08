#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,x[76],Max,i;
    ifstream f;
    ofstream g;
    f.open("sir.txt");
    f>>n;
    for(i=1;i<=n;i++)
        f>>x[i];
    f.close();
    Max=x[1];
    for(i=2;i<=n;i++)
        if(Max==x[i])
            Max=x[i];
    g.open("maxim.txt");
    g<<Max<<endl;
    for(i=1;i<=n;i++)
        if(Max==x[i])
            g<<i<<' ';
    g.close();
    return 0;

}
