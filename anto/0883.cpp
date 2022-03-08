#include <iostream>
#include <fstream>
using namespace std;
int x[21],n,a[21];
long long nr;
void citire(){
    ifstream f("date.in");
    int aux;
    while(f>>aux) a[++n]=aux;
    f.close();
}
void ordonare(){
    int i,j,aux;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(a[j]<a[i]){
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
}
int valid(int k) {
    int i;
    for(i=1;i<=k-1;i++)
        if(x[k]==x[i]) return 0;
    return 1;
}
void solutie(){
    int i;
    for(i=1;i<=n;i++)
        cout<<a[x[i]]<<' ';
    cout<<endl;
    nr++;
}
void Back() {
    int k=1;
    x[k]=0;
    while(k>0)
        if(x[k]<n){
            x[k]++;
            if(valid(k))
                if(k==n) solutie();
                else x[++k]=0;
        }else k--;
}
int main(){
    citire();
    ordonare();
    Back();
    cout<<nr<<" solutii";
    return 0;
}
