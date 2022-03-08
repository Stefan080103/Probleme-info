#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int m,n,i,j,a[27][31],Min,aux;
    //citire date
    cout<<"dati numarul de linii ale matricei a:";
    cin>>n;
    cout<<"dati numarul de coloane ale matricei a:";
    cin>>m;
    cout<<"introduceti pe "<<n<<" linii "<<m<<" numere intregi:";
    cout<<endl;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    //calcul minim pe tablou
    Min=a[1][1];
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            if(a[i][j]<Min)
                Min=a[i][j];
    aux=Min-1;
    //bordare
    for(i=0;i<=n+1;i++)
        a[i][0]=a[i][m+1]=aux;
    for(j=1;j<=m;j++)
        a[0][j]=a[n+1][j]=aux;
    //rezolvare
    ofstream g("sa.txt");
    for(i=0;i<=n+1;i++)
        for(j=0;j<=m+1;j++)
            if(a[i][j]>a[i-1][j]&&a[i][j]>a[i+1][j]&&a[i][j]>a[i][j-1]&&a[i][j]>a[i][j+1])
                g<<i<<" "<<j<<endl;
    g.close();
    return 0;
}
