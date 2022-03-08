#include <iostream>
using namespace std;
int x[100];
int  pozitionare(int p,int q){
    int  i=p,j=q,s=-1,aux=x[i];
    while(i<j)
        if(s<0)
            if(aux<=x[j])
                j--;
            else {x[i]=x[j];s=1;}
        else if(aux>=x[i]) i++;
            else {x[j]=x[i];s=-1;}
    x[i]=aux;
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
