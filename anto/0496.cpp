#include <iostream>
#include <fstream>
using namespace std;
int n,a[31][31],x[51],k,v[51];
ifstream f;
void citire(){
    int i,e1,e2,m;
    f.open("gno.txt");
    f>>n>>m;
    for(i=1;i<=m;i++){
        f>>e1>>e2;
        a[e1][e2]=a[e2][e1]=1;
    }
    f.close();
}
void sir(){
    f.open("sir.txt");
    int b;
    while(f>>b)
        x[++k]=b;
    f.close();
}
int lant(){
    int i;
    //noduri
    for(i=1;i<=n;i++)
        if(x[i]<0 ||x[i]>n)
            return 0;
    //muchii
    for(i=1;i<k;i++)
        if(a[x[i]][x[i+1]]==0)
            return 0;
    return 1;
}
int elementar(){
    int i;
    for(i=1;i<=k;i++)
        v[x[i]]++;
    for(i=1;i<=n;i++)
        if(v[i]>=2)
            return 0;
    return 1;
}
int simplu(){
    int i,j;
    for(i=1;i<k;i++){
        a[x[i]][x[i+1]]++;
        a[x[i+1]][x[i]]++;
    }
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(a[i][j]>2)
                return 0;
    return 1;
}
int main()
{
    citire();
    sir();
    if(lant()==1){
        cout<<"lant ";
        if(elementar()==1)
            cout<<"elementar simplu";
        else
            if(simplu()==1)
                cout<<"simplu";
    }else cout<<"nu este lant";
    return 0;
}
