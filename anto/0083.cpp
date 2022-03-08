#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,k,ok,nr,p;
    ifstream f("bac.in");
    nr=ok=k=0;
    while(f>>x){
        nr++;
        if(x<0) p=nr;
        if(x<0) ok=1;
        if(ok==1) k++;
    }
    f.close();
    if(k<p) cout<<p;
    else cout<<k;
    return 0;
}
