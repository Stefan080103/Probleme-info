#include <iostream>
using namespace std;
int A[101][101],c[11],n,m,nr;
void citire(){
    int i,j;
    cin>>nr>>n>>m;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            cin>>A[i][j];
}
int cifra_control(int x){
    int aux;
    aux=0;
    while(x/10){
        aux=0;
        while(x){
            aux+=x%10;
            x=x/10;
        }
        x=aux;
    }
    return x;
}
int prefix(int x){
    int o;
    while(x){
        o=o*10+x%10;
        x=x/10;
    }
    x=o; o=0;
    while(x){
        if(c[x%10]==1)
            o=o*10+x%10,x/=10;
        else break;
    }
    return o;
}
void afisare(){
    int p;
    p=prefix(nr);
    if(p==0) cout<<"nu exista prefix";
    else cout<<p;
}
int main()
{
    citire();
    int i,j;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            c[cifra_control(A[i][j])]=1;
    afisare();
    return 0;
}
