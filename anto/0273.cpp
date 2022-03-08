#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,a,b=0,nr;
    ifstream f("bac.in");
    ofstream g("bac.out");
    while(f>>x){
        a=x;
        nr=0;
        while(a!=0){
            a=a/10;
            nr++;
        }
        if(nr%2!=0){
            g<<x<<" ";
            b++;
        }
    }
    f.close();
    if(b==0) g<<"nu exista";
    g.close();
    return 0;
}
