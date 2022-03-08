#include <iostream>
using namespace std;
int x[100];
void schimb(int &a,int &b){
    int aux=a; a=b; b=aux;
}
int  pozitionare(int p,int q){
    int  i=p,j=q,si=0,sj=1;
    while(i<j){
        if(x[i]>x[j]){
            schimb(x[i],x[j]);
            schimb(si,sj);
        }
        i=i+si;
        j=j-sj;
    }
    return i;
}
void divide(int p,int q){
    if(p<q){
        int k=pozitionare(p,q);
        divide(p,k-1);
        divide(k+1,q);
    }
}
int main(){
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>x[i];
    divide(1,n);
    for(i=1;i<=n;i++)
        cout<<x[i]<<" ";
    return 0;
}
