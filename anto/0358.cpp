#include <iostream>
#include <fstream>
using namespace std;
int main()
{   int a[20][20],p,q,i,j,nr,Min,aux,d;
    //citire date
    ifstream f("mat.txt");
    f>>p>>q;
     for(i=1;i<=p;i++)
            for(j=1;j<=q;j++)
                f>>a[i][j];
    f.close();
    //numarare
    for(j=1;j<=q;j++){
        nr=0;
        for(i=1;i<=p;i++){
            //primalitate
            aux=0;
            for(d=2;d*d<=a[i][j];d++)
                if(a[i][j]%d==0){
                    aux=d;break;
                }
            if(aux==0 && a[i][j]>1)
                nr++;
        }
        a[0][j]=nr;
    }
    // minim pe linia 0
    Min=a[1][1];
    for(j=1;j<=q;j++)
        if(a[0][j]<Min)
            Min=a[0][j];
    //afisare
    ofstream g("col.txt");
    for(j=1;j<=q;j++)
        if(a[0][j]==Min)
            g<<j<<' ';
    g.close();
    return 0;
}
