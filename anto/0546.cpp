#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,nr=0,Max,k;
    ifstream f("bac.txt");
    while(f>>x){
        if(x%2==0) nr++;
        else nr=0;
        if(nr>Max) Max=nr,k=1;
        else if(nr==Max) k++;

    }
    f.close();
    if(Max>=2)
        cout<<k;
    else cout<<0;
    return 0;
}
