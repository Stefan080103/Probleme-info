#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,m,a[21][15],i,j;
    //citire tablou
    cout<<"numar linii=";
    cin>>n;
    cout<<"numar coloane =";
    cin>>m;
    cout<<"dati "<<n<<" linii cu cate "<<m<<" cifre :"<<endl;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    //afisare tablou
    ofstream g("f1.txt");
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            g<<a[i][j]<<" ";
        g<<endl;
    }
    g.close();
    return 0;
}
