#include <iostream>
#include <fstream>
using namespace std;
int S,n,v[30],x[30],Sp;
ofstream g;
long long nr;
void sortare(){
    int i,j,aux;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
        }
}
void solutie(){
    int i;
    for(i=1;i<=n;i++)
        if(x[i]>0)
            g<<x[i]<<"*"<<v[i]<<endl;
    g<<endl;
}
int valid(int k){
    return ((Sp+x[k]*v[k])<=S);
}
int optim(){
    return (Sp==S);
}
void backtr(int k){
    int i;
    for(i=0;i<=(S-Sp)/v[k];i++){
        x[k]=i;
        if(valid(k)){
            Sp=Sp+x[k]*v[k];
            if(k==n)
                if(optim()) solutie();
                else ;
            else backtr(k+1);
            Sp=Sp-x[k]*v[k];
        }
    }
}
int main(){
    cin>>S>>n; int i;
    for(i=1;i<=n;i++)
        cin>>v[i];
    g.open("plata.txt");
    sortare();
    backtr(1);
    g.close();
    cout<<nr;
    return 0;
}

