#include <iostream>
#include <fstream>
using namespace std;
int n,m,a[30][30];
void citire(){
     int e1,e2;
     ifstream f("gno.txt");
     f>>n;
     f>>m;
     for(int i=1;i<=m;i++){
        f>>e1>>e2;
        a[e1][e2]=1;
        a[e2][e1]=1;
     }
     f.close();
}
int  suma(){
    int j,i,s=0;
    for( i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            s=s+a[i][j];
    return s;
}
int grad(int k){
    int s=0;
    for(int i=1;i<=n;i++)
        s=s+a[i][k];
    return s;
}
int exista(){
    int i;
    for(i=1;i<=n;i++)
        if(grad(i)==0) return 1;
    return 0;
}
int main()
{
    citire();
    if(n*(n-1)==suma())
        cout<<"da";
    else cout<<"nu";
    cout<<endl;
    cout<<"admite "<<(1<<n)-1<<"  subgrafuri";
    cout<<endl;
    if(exista()==1) cout<<"exista";
    else cout<<"nu exista";
    return 0;
}
