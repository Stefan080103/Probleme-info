#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int z,u,Max;
    cin>>z;
    ofstream g;
    Max=z%10;
    z=z/10;
    while(z>0){
        u=z%10;
        if(u>Max)
            Max=u;
        z=z/10;
    }
    g.open("maxim.txt");
    g<<Max;
    g.close();
    return 0;
}
