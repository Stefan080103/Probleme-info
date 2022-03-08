#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,M,L=0,nr=1,y,i;
    ifstream f("bac.txt");
    f>>x;
    while(f>>y){
        if(x==y){
                nr++;
                if(L<=nr)  L=nr,M=x;
        }else nr=1,x=y;
    }
    f.close();
    cout<<L<<endl;
    for(i=1;i<=L;i++)
        cout<<M<<" ";
    return 0;
}
