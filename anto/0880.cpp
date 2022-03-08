#include <iostream>
using namespace std;
int m,y[500],d[500],x,n;
void diviz(){
    int i;
    d[1]=1; n=1;
    for(i=2;i<=x/2;i++)
        if(x%i==0) d[++n]=i;
    if(x>1) d[++n]=x;
}
void afisare( int k)
{
    for(int i=1;i<=k;i++)
        cout<<d[y[i]]<<" ";
    cout<<endl;
}
void backt(){
    int k=1;
    y[k]=0;
    while(k>=1)
        if(y[k]<n-m+k){
            y[k]++;
            if(k==m)
                afisare(k);
            else y[++k]=y[k-1];
        }else k--;
}

int main()
{
    cin>>x>>m;
    diviz();
   backt();
    for(int i=1;i<=n;i++)
        cout<<d[i]<<" ";
    return 0;
}
