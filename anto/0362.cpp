#include <iostream>
using namespace std;
int main()
{
    int a[26][26],b[26][26],x[26][26],y[26][26],n,i,j;
    //citire date
    cout<<"introduceti numarul de linii si de coloane ale matricei";
    cin>>n;
    //pe diagonala principala si cea secundara 1 iar in rest 2
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            a[i][j]=2;
    for(i=1;i<=n;i++)
        a[i][i]=1;
    for(i=1;i<=n;i++)
        a[i][n-i+1]=1;
    //afisare matrice
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    //pe diagonala pricipala 0, deasupra ei 1 si sub ea 2
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            b[i][j]=1;
    for(i=1;i<=n;i++)
        b[i][i]=0;
    for(i=2;i<=n;i++)
        for(j=1;j<=i-1;j++)
            b[i][j]=2;
    //afisare matrice
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    //deasupra diagonalei secundare 2, sub diagonala secundara 3,iar pe ea 1
    for(i=1;i<=n;i++)
        for(j=1;j,=n;j++)
            x[i][j]=2;
     for(i=1;i<=n;i++)
        x[i][n-i+1]=1;
    return 0;
}
