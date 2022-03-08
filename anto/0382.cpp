#include <iostream>
using namespace std;
int main()
{
    int a[40][40],i,j,n,v[40],aux,nr=0,p,q;
    cout<<"dati numarul de linii si de coloane ale matricei :";
    cin>>n;
    cout<<"dati un numar natural p mai mic sau egal cu "<<n<<" :";
    cin>>p;
    cout<<"dati un numar natural q mai mic sau egal cu "<<n<<" :";
    cin>>q;
    cout<<"introduceti pe "<<n<<" linii "<<n<<" numere intrgi :";
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    //ordonare crescatoare pe diagonala principala
    for(i=1;i<=n;i++){
        v[i]=a[i][i];
        nr++;
    }
    for(i=1;i<=nr-1;i++)
        for(j=i+1;j<=nr;j++)
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
    for(i=1;i<=n;i++)
        a[i][i]=v[i];
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    //ordonare descrescatoare pe diagonala secundara
    for(i=1;i<=n;i++)
        v[i]=a[i][n-i+1];
    for(i=1;i<=nr-1;i++)
        for(j=i+1;j<=nr;j++)
            if(v[i]<v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
    for(i=1;i<=n;i++)
        a[i][n-i+1]=v[i];
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    //ordonare crescatoare pe linia p
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            v[i]=a[p][j];
    for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            a[p][j]=v[i];
     for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    //ordonare descrescatoare pe coloana q
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            v[i]=a[i][q];
    for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            a[i][q]=v[i];
     for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
