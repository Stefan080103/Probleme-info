#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,x,y,i;
    ifstream f("bac.txt");
    f>>n;
    for(i=1;i<=n/2;i++) f>>x;
    for(;i<=n;i++)
    {
        f>>y;
        if(y<x)
            break;
    }
    f.close();
    if(x==y) cout<<"nu exista";
    else cout<<y;
    return 0;
}
