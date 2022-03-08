#include <iostream>
using namespace std;
void verificare(int x,int &d,int& e){
    int aux=x;
    while(x){
        if(x%10==d)
        {
            d=1; break;
        }
        x=x/10;
    }
     while(aux){
        if(aux%10==e)
        {
            e=1; break;
        }
        aux=aux/10;
    }
}
void stergere(int q,int &n,int v[]){
    int i;
    for(i=q;i<n;i++)
        v[i]=v[i+1];
    n--;
}
void sub(int a,int b, int&n, int v[]){
    int d,e,i;
    for(i=1;i<=n;){
        d=a; e=b;
        verificare(v[i],d,e);
        if(d==1 && e==0) stergere(i,n,v);
        else i++;
    }
}
int main()
{
    int n,v[101],a,b,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    cin>>a>>b;
    sub(a,b,n,v);
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}
