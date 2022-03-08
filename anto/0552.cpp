#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int si=0,sp=0,S=0,x,i,n;
    ifstream f("bac.txt");
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        if(x%2) si+=x;
        else sp+=x;
    }
    for(i=1;i<=n;i++)
    {
        f>>x;
        if(x%2) S=S+x*sp;
        else S=S+x*si;
    }
    f.close();
    cout<<S;
    return 0;
}
