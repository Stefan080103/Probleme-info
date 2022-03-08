#include <fstream>
using namespace std;
int main()
{
    int p,q,i,j,a[31][31],ok,d,nr,minim;
    //citire date
    ifstream f("mat.txt");
    f>>p>>q;
    for(i=1;i<=p;i++)
        for(j=1;j<=q;j++)
            f>>a[i][j];
    f.close();
    //numarare numere prime per coloana
    for(j=1;j<=q;j++){
        for(i=1;i<=p;i++){
        ok=0;nr=0;
        for(d=2;d*d<=a[i][j];d++)
            if(a[i][j]%d==0) { ok=1; break;}
        if(ok==0 && a[i][j]>1) nr++;
        }
        a[0][j]=nr;
    }
    //calcul minim
    minim=a[0][1];
    for(j=2;j<=q;j++)
        if(a[0][j]<minim) minim=a[0][j];
    //afisare
    ofstream g("col.txt");
    for(j=1;j<=q;j++)
        if(a[0][j]==minim) g<<j<<" ";
    g.close();
    return 0;
}
