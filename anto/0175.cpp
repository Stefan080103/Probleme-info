#include <iostream>
#include <fstream>
using namespace std;
int n,m;
float x[30][26];
ofstream g;
void citire(){
    ifstream f("f2.txt");
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            f>>x[i][j];
    f.close();
}
void afisaree(){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout<<x[i][j]<<" ";
        cout<<endl;
    }
}
void permutare(){
    int i;
    float aux;
    aux=x[1][1];
    for(i=2;i<=n;i++)
        x[i-1][1]=x[i][1];
    x[n][1]=aux;
}
void dublare(){
    int j;
    for(j=1;j<=m;j++)
        if(x[1][j]==(int)x[1][j])
            x[1][j]=2*x[1][j];
}
void ordonare(){
    int i,j;
    float aux;
    for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
            if(x[j][m]<x[i][m]){
                aux=x[j][m];
                x[j][m]=x[i][m];
                x[i][m]=aux;
            }
}
void afisaref(){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            g<<x[i][j]<<" ";
        g<<endl;
    }
}
int main(){
    citire();
    afisaree();
    permutare();
    g.open("f2.out");
    afisaref();
    g<<endl;
    dublare();
    afisaref();
    g<<endl;
    ordonare();
    afisaref();
    g<<endl;
    g.close();
    return 0;
}
