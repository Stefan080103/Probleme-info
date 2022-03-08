#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int n,x[11],Max;
char a[11][25],t[251];
void citire(){
    int i;
    ifstream f("cuvinte.in");
    f>>n;
    f.get();
    for(i=1;i<=n;i++)
        f.getline(a[i],25);
    f.close();
}
void optim(int k){
    int S=0;
    for(int i=1;i<=k;i++)
        S+=strlen(a[x[i]]);
    if(S>Max){
        Max=S;
        t[0]=0;
        for(int i=1;i<=k;i++)
            strcat(t,a[x[i]]);
    }
}
int valid (int k){
    for(int i=1;i<k;i++)
        if(x[k]==x[i])
            return 0;
    if(k==1)
        return 1;
    else {
        int l=strlen(a[x[k-1]]);
        if(a[x[k]][0]>a[x[k-1]][l-1])
            return 1;
        else return 0;
    }
}
void backt(int k){
    for(int i=1;i<=n;i++){
        x[k]=i;
        if(valid(k)){
            optim(k);
            if(k<n)
                backt(k+1);
        }
    }
}
int main()
{
    citire();
    backt(1);
    if(Max>0) cout<<t;
    else cout<<"NU EXISTA";
    return 0;
}
