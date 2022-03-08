#include <iostream>
using namespace std;
int main()
{
    int a[40][40],i,j,n;
    cout<<"dati numarul de linii si de coloane ale matricei :";
    cin>>n;
    cout<<"introduceti pe "<<n<<" linii "<<n<<" numere intrgi :";
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    //afisare elemente de deasupra diagonalei principale
    for(i=1;i<=n-1;i++){
        for(j=i+1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    //afisare elemente de sub diagonala principala
    for(i=2;i<=n;i++){
        for(j=n-i+2;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
