#include <iostream>
#include <fstream>
using namespace std;
int main()
{   int n,m,a[27][32],i,j,aux,Min;
    // I: CITIRE DATE
    cout<<"nr linii:";  cin>>n;
    cout<<"nr coloane:";    cin>>m;
    cout<<"dati o matrice cu "<<n<<" linii si "<<m<<" coloane:"<<endl;
    for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
                cin>>a[i][j];
    // II: CALCUL MINIM PE TABLOU
    Min=a[1][1];
    for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
                if(a[i][j]<Min)
                    Min=a[i][j];
    // III: BORDARE
    aux=Min-1;
    for(j=0;j<=m+1;j++)
        a[0][j]=aux;
    for(i=1;i<=n+1;i++)
        a[i][m+1]=aux;
    for(j=0;j<=m;j++)
        a[n+1][j]=aux;
    for(i=1;i<=n;i++)
        a[i][0]=aux;
    // IV: REZOLVARE
    ofstream g("sa.txt");
     for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
                if(a[i-1][j]<a[i][j] && a[i+1][j]<a[i][j] && a[i][j-1]<a[i][j] && a[i][j+1]<a[i][j])
                    g<<i<<' '<<j<<endl;
    g.close();
    return 0;
}
