#include <iostream>
using namespace std;
int main()
{
    int nr=0,i;
    for(i=100;i<=999;i++)
        if(i%2==0)
            if(i/10%2==0)
                if(i/100%2==0)
                    nr++;
    cout<<nr;
    return 0;
}
