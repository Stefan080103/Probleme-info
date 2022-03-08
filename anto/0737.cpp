#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,p,u1,u2,Min,s,nr;
    ifstream f;
    ofstream g;
    f.open("numar.txt");
    f>>n>>p;
    f.close();
    Min=n%10;
    n=n/10;
    s=0;
    nr=0;
    do{
        u1=n%10;
        if(u1<Min)
            Min=u1;
        while(p!=0){
            u2=p%10;
            nr++;
            s=s+u2;
            p=p/10;
        }
        n=n/10;
    }while(n!=0);
    g.open("f17.out");
    g<<Min<<"  "<<nr<<"  "<<s;
    g.close();
    return 0;
}
