#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,u,Max,nr;
    ifstream f;
    f.open("numar.txt");
    f>>n;
    f.close();
    Max=-1;
    nr=0;
    do{
        u=n%10;
        if(u%2!=0)
            if(u>Max){
                Max=u;
                nr++;
            }
        n=n/10;
    }while(n!=0);
    if(nr==0)
        cout<<"nu exista cifre impare";
    else cout<<Max;
    return 0;
}
