#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int  i,x,n,Max,p=1;
    ifstream f("bac.txt");
    f>>n;
    f>>x;
    Max=x;
    if(x>0)
        p=p*x;
    for(i=2;i<=n;i++){
        f>>x;
        if(x>Max)
            Max=x;
        if(x>0)
            p=p*x;
    }
    f.close();
    cout<<Max<<endl<<p%10;
    return 0;
}
