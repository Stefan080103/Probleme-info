#include <iostream>
using namespace std;
struct muchie{int e1,e2;};
muchie U[100*99/2+1];
int n, viz[101],m;
void reprezentare(){
    int i;
    cin>>n>>m;
    for(i=1;i<=m;i++)
        cin>>U[i].e1>>U[i].e2;
}
void vizitare(int x){
    viz[x]=1;
}
int adiacent (int a, int b){
    for(int i=1;i<=m;i++)
        if(U[i].e1==a && U[i].e2==b || U[i].e1==b && U[i].e2==a)
            return 1;
    return 0;
}
int DF(int x){
    int s[101],v,i,nr;
    v=1;
    s[1]=x;
    vizitare(x); nr=1;
    while(v){
        for(i=1;i<=n;i++)
            if(!viz[i] && adiacent(i,s[v])==1)
                break;
        if(i<=n){
            nr++;
            s[++v]=i;
            vizitare(i);
        }else v--;
    }
    return nr;
}
int main()
{
    reprezentare();
    int Max=0,nr;;
    int x;
    for(x=1;x<=n;x++)
    if(viz[x]==0){
        nr=DF(x);
        if(nr>Max)
            Max=nr;
    }
    cout<<Max;
    return 0;
}
