#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int k,x,nr=0,Max=0,Max2=1;
    ifstream f("bac.txt");
    f>>k;
    while(f>>x)
        if(x%k==0) nr++;
        else if(Max<nr) {Max=nr; nr=0; Max2=1;}
            else if(Max==nr){ Max2++; nr=0;}
    f.close();
    if(Max<nr) {Max=nr;  Max2=1;}
    else if(Max==nr)Max2++;
    cout<<Max<<" "<<Max2;
    return 0;
}
