#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,nr=1;
    ifstream f("bac.in");
    while(f>>x)
        if(x<0)
            while(f>>x) nr++;
    f.close();
    cout<<nr;
    return 0;
}
