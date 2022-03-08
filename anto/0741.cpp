
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int b,u,Max,nr;
    ifstream f;
    f.open("f27.in");
    f>>b;
    f.close();
    Max=-1;
    nr=0;
    do{
        u=b%10;
        if(u%2!=0)
            if(u>Max){
                Max=u;
                nr++;
            }
        b=b/10;
    }while(b!=0);
    if(nr==0)
        cout<<"nu exista cifre impare";
    else cout<<Max;
    return 0;
}
