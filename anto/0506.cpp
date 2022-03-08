#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,y,i,nr=0;
    ifstream f("numere.in");
    f>>x;
    while(f>>y){
        for(i=x+1;i<y;i++)
            cout<<i<<" ",nr++;
        x=y;
    }
    if(nr==0) cout<<"nu";
    return 0;
}
