#include <iostream>
using namespace std;
int n,x[51],v[101],nr,s;
int prim(int y){
    if(y<2) return 0;
    int i;
    for(i=2;i*i<=y;i++)
        if(y%i==0) return 0;
    return 1;
}
void citire(){
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
        if(prim(i)==1) v[++nr]=i;
}

void solutie(int k){
    int i;
    for(i=1;i<=k;i++)
            cout<<v[x[i]]<<' ';
    cout<<endl;
}
int optim(int k){
    int i;
    for(i=1;i<=nr;i++)
        if(x[k]<x[i])
            return 0;
    return (s==n);
}
void Back (int k){
    int i;
    for (i=1;i<=nr;i++){
        x[k]=i;
        if (s+v[x[k]]<=n){
            s+=v[x[k]];
            if (optim(k))
                solutie(k);
            else
                Back (k+1);
            s-=v[x[k]];
        }
    }
}
int main(){
    citire();

    Back(1);
    return 0;
}
