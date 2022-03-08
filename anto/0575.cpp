#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,nr,y;
    ifstream f("bac.txt");
    f>>x;
    nr=1;
    while(f>>y){
        if(x==y) nr++;
        else cout<<x<<" "<<nr<<" ",nr=1;
        x=y;
    }
    if(x==y) cout<<x<<" "<<nr<<" ";
    return 0;
}
