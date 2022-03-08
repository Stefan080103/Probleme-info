#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,nr=1,y;
    ifstream f("bac.txt");
    f>>x;
    while(f>>y){
        if(x==y) nr++;
        else if(nr==2) {cout<<x<<" ";nr=1;}
            else nr=1;
        x=y;
    }
    if(nr==2) cout<<x;
    f.close();
    return 0;
}
