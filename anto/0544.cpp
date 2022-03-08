#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,y,z,M;
    ifstream f("bac.txt");
    f>>x>>y;
    cout<<x<<" ";
    if(x<y) M=y;
    else M=x;
    while(f>>z){
        if(z>=y && y>=x && y>=M) cout<<y<<" ";
        if(z>M) M=z;
        x=y,y=z;
    }
    f.close();
    if(z>=M) cout<<z;
    f.close();
    return 0;
}
