#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int suf,ps=1,M,ok=0,x;
    ifstream f("bac.txt");
    f>>x;
    suf=x;
    while(x) ps*=10,x/=10;
    while(f>>x) if(x%ps==suf) M=suf,ok=1;
    if(ok==0) cout<<"nu exista";
    else cout<<M;
    return 0;
}
