#include <iostream>
using namespace std;
int v[31][31],n,m;

int VerifColoane(int c,int x[][31]){
    int j,ok=1;
    for(j=2;j<=m;j++)
        if(v[c][j]<v[c][j-1]) ok=0;
    return ok;
}

int VerifLinii(int v[][31],int l){
    int j,ok=1;
    for(j=2;j<=m;j++)
        if(v[l][j]<v[l][j-1]) ok=0;
    return ok;
}


int main()
{
    int nr,i,j;

    //citire matrice
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++);
    cin>>v[i][j];

    cout<<"Linii bune :";

    return 0;
}
