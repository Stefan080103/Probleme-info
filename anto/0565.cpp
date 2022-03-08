#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int Max=-1,nr,x,c=1,k;
    ifstream f("bac.txt");
    f>>k;
    nr=0;
    while(f>>x){
        if(x%k==0) nr++;
        else
            if(nr>Max) Max=nr,c=1,nr=0;
            else
                if(nr==Max) c++,nr=0;
    }
    f.close();
    if(nr==Max) c++;
    cout<<Max<<" "<<c;
    return 0;
}
