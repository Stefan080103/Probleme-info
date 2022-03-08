#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,i,x,M1=-1,M2=-1,Max;
    ifstream f("bac.txt");
    f>>n;
    for(i=1;i<=n/2;i++)
    {
        f>>x;
        if(x>M1) M2=M1,M1=x;
        else if(x>M2 && x!=M1) M2=x;
    }
     f>>Max;
    f.close();
    if(M1<Max ) cout<<M1;
    else if(M2<Max && M2!=-1) cout<<M2;
        else cout<<"nu exista";
    return 0;
}
