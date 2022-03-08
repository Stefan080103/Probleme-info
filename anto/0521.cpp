#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,i,Max,x,nr=0;
    ifstream f("bac.txt");
    f>>n;
    f>>Max;
    for(i=2;i<=n;i++)
    {
        f>>x;
        if(x>Max) nr++,Max=x;
        else if(x<Max) nr++;
    }
    f.close();
    cout<<nr<<endl;
    if(nr>=3) cout<<"da";
    else cout<<"nu";
    return 0;
}
