#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,i;
    float x[1001],Max;
    ifstream f("sir.txt");
    //citire lungime vector
    f>>n;
    //citire vector
    for(i=1;i<=n;i++)
        f>>x[i];
    f.close();
    //initializare Max
    Max=x[1];
    //gasirea maximului
    for(i=2;i<=n;i++)
        if(x[i]>Max)
            Max=x[i];
    ofstream g("maximum.txt");
    //afisarea pozitiilor lui Max
    for(i=1;i<=n;i++)
        if(x[i]==Max)
            g<<i<<" ";
    g.close();
    return 0;
}
