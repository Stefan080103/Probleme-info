#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int p,q,i,j,a[31][36],ok,d,Min;
    //citire date
    ifstream f("mat.txt");
    f>>p>>q;
    for(i=1;i<=p;i++)
        for(j=1;j<=q;j++)
            f>>a[i][j];
    f.close();
    for(j=1;j<=q;j++)
        a[0][j]=0;
    //numarare primalitate pe coloane
    for(j=1;j<=q;j++)
        for(i=1;i<=p;i++){
            ok=0;
            for(d=2;d*d<=a[i][j];d++)
                if(a[i][j]%d==0){
                    ok=d;break;
                }
            if(ok==0 && a[i][j]>1)
                a[0][j]++;
        }
    //calcul minim
    Min=a[0][1];
    for(j=2;j<=q;j++)
        if(a[0][j]<Min)
            Min=a[0][j];
    //afisare date
    ofstream g("col.txt");
    for(j=1;j<=q;j++)
        if(a[0][j]==Min) g<<j<<" ";
    g.close();
    return 0;
}
