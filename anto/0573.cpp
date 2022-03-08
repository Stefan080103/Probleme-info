#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,k,s,aux,y,z;
    ifstream f("bac.txt");
    k=1; s=0;
    f>>x>>y;
    z=y-x;
    x=y;
    while(f>>y){
        if(y-x==z)
            k++;
        else {k=1; z=y-x;}
        if(k>s) s=k,aux=z;
        x=y;
    }
    f.close();
    cout<<aux;
    return 0;
}
