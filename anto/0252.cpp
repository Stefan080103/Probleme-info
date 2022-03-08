#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a,x,nr=0,o;
    ifstream f("bac.in");
    ofstream g("bac.out");
    while(f>>x){
        a=x;
        o=0;
        while(a>0){
            o=o*10+a%10;
            a=a/10;
        }
        if(o!=x){
            g<<x<<" ";
            nr++;
        }
    }
    f.close();
    if(nr==0)
        g<<"nu exista";
    g.close();
    return 0;
}
