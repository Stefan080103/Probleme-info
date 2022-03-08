#include <iostream>
using namespace std;
int x[21];
int nrp(int p,int q){
    if(p==q) if(x[p]%2==0) return 1;
        else return 0;
    else {
        int m=(p+q)/2;
        int nr1=nrp(p,m);
        int nr2=nrp(m+1,q);
        return nr1+nr2;
    }
}
int maxv(int p,int q){
    if(p==q) return x[p];
    else{
        int m=(p+q)/2;
        if(maxv(p,m)>maxv(m+1,q))
            return maxv(p,m);
        else return maxv(m+1,q);
    }
}
void interclasare(int a,int b,int c,int d){
    int i=a,j=c,k=0,v[100];
    while(i<=b && j<=d)
        if(x[i]<x[j]) v[++k]=x[i++];
        else v[++k]=x[j++];
    while(i<=b) v[++k]=x[i++];
    while(j<=d) v[++k]=x[j++];
    for(i=1;i<=k;i++)
        x[a+i-1]=v[i];
}
void divide(int p,int q){
    if(p<q){
        int m=(p+q)/2;
        divide(p,m);
        divide(m+1,p);
        interclasare(p,m,m+1,q);
    }
}
int main()
{
    int n,i;
    cout<<"n=  ";
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>x[i];
    cout<<nrp(1,n);
    cout<<endl<<maxv(1,n);
    return 0;
}
