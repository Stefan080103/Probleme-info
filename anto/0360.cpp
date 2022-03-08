#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int p,q,i,j,b[50][50],l,c,x;
    //citire date
    ifstream f("mat.in");
    f>>p>>q;
    for(i=1;i<=p;i++)
        for(j=1;j<=q;j++)
            f>>b[i][j];
    f.close();
    cout<<"l="; cin>>l;
    cout<<"c="; cin>>c;
    cout<<"Dati un nr cu strict 2 cifre:"; cin>>x;
    //inserare linia l
    x=x%10;
    for(i=p;i<=l;i--)
        for(j=1;j<=q;j++)
            b[i+1][j]=b[i][j];
    p++;
    for(j=1;j<=q;j++)
        b[l][j]=x;
    //inserare coloana c
    for(j=q;j>=c;j--)
        for(i=1;i<=p;i++)
            b[i][j+1]=b[i][j];
    q++;
    for(i=1;i<=p;i++)
        b[i][c]=x;
    //afisare matrice
    for(i=1;i<=p;i++) {
        for(j=1;j<=q;j++)
            cout<<b[i][j]<<' ';
        cout<<endl;
    }
   return 0;
}


