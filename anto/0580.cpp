#include <iostream>
using namespace std;
int a[30001],p[34];
void grup(int x[],int n){
    int b[33],lungime,i,nr,Max=0,j,aux;
    for(j=1;j<=n;j++){
        aux=x[j];
        for(i=1;aux>0;i++)
        {
            b[i]=aux%2;
            aux/=2;
        }
        lungime=i-1;
        nr=0;
        for(i=lungime;i>0;i--)
            if(b[i]==1) nr++;
        p[nr]=1;
        if(Max<nr) Max=nr;
        a[x[j]]=nr;
    }
    nr=0;
    for(i=1;i<=33;i++)
        for(j=1;j<=n;j++)
            if(a[x[j]]==i){nr++;break;}
    cout<<"NUMAR GRUP=";
    cout<<nr<<"     ";
    int ok,ok2=1;
    cout<<"GRUPURI :";
    for(i=1;i<=33;i++)
        if(ok2<nr)
            if(p[i]==1){
                ok=0;
                cout<<"("<<" ";
                for(j=1;j<=n;j++)
                    if(a[x[j]]==i && ok==0)
                        cout<<x[j],ok=1;
                    else if(a[x[j]]==i && ok==1)
                        cout<<","<<" "<<x[j];
                cout<<" "<<")"<<" "<<","<<" ",ok2++;
            }else;
        else if(p[i]==1){
                ok=0;
                cout<<"("<<" ";
                for(j=1;j<=n;j++)
                    if(a[x[j]]==i && ok==0)
                        cout<<x[j],ok=1;
                    else if(a[x[j]]==i && ok==1)
                        cout<<","<<" "<<x[j];
                cout<<" "<<")"<<" "<<".";
            }
}
int main()
{
    int x[100],n;
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
        cin>>x[i];
    grup(x,n);
    return 0;
}
