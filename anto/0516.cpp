#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,nr,Max;
    ifstream f("bac.txt");
    f>>Max;
    nr=1;
    while(f>>x){
        if(x==Max) nr++;
        else if(nr==1){cout<<Max<<" "; nr=1; Max=x;}
            else nr=1, Max=x;
    }
    if(nr==1)
        cout<<Max;
    f.close();
    return 0;
}
