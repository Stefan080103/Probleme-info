#include <iostream>
using namespace std;
int main()
{
    int a[40][40],i,j,n,s1=0,s2=0;
    cout<<"dati numarul de linii si de coloane ale matricei :";
    cin>>n;
    cout<<"introduceti pe "<<n<<" linii "<<n<<" numere intrgi :";
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    //suma elementelor aflate deasupra diagonalei principale
    for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
            s1=s1+a[i][j];
    //suma elementelor de sub diagonala secundara
    for(i=2;i<=n;i++)
        for(j=n-i+2;j<=n;j++)
           s2=s2+a[i][j];
    cout<<s1<<" "<<s2;
    return 0;
}
