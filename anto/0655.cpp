#include <iostream>
#include <fstream>
using namespace std;
int n, a[101][101],L,v[101],c[2501],b[2501],l,d[101];
void reprezentare(){
    int x,y;
    ifstream f("GNO.txt"); f>>n;
    while(f>>x>>y)
        a[x][y]=a[y][x]=1;
    f.close();
}
int grad(int x){
    int i,s=0;
    for(i=1;i<=n;i++)
        s=s+a[x][i];
    return s;
}
int cautare(){
    int i;
    for(i=1;i<=L;i++)
        if(d[c[i]])
            return i;
    return -173;
}
void muchie(int x,int y){
    a[x][y]=a[y][x]=0;
    d[x]--;
    d[y]--;
}
void ciclu(int x, int v[],int &k){
    k=0;
    v[0]=x;
    int i;
    do{
        //caut nod adiacent lui v[k]
        for(i=1;i<=n;i++)
            if(a[i][v[k]]){
                muchie(i,v[k]);
                v[++k]=i;
                break;
            }
    }while(v[k]!=x);
}
void inserare(int  p){
    int i;
    for(i=L;i>p;i--)
        c[i+l]=c[i];
    for(i=1;i<=l;i++)
        c[p+i]=b[i];
    L=L+l;
}
int grade_pare(){
    int i;
    for(i=1;i<=n;i++)
        if(d[i]%2) return 0;
    return 1;
}
int main(){
    reprezentare();
    int i,p;
    for(i=1;i<=n;i++)
        d[i]=grad(i);
    int m=0;
    for(i=1;i<=n;i++)
        m=m+d[i];
    m=m/2;
    if(!grade_pare()) cout<<"nu e eulerian";
    else {
        ciclu(1,c,L);
        while(L!=m){
            p=cautare();
            ciclu(c[p],b,l);
            inserare(p);
        }
        for(i=0;i<=L;i++)
            cout<<c[i]<<" ";
    }

    return 0;
}
