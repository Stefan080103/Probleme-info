#include <iostream>
#include <fstream>
using namespace std;
int n,m; int viz[101];
int a[101][101];
void reprezentare(){
    ifstream f("GNO.txt");
    f>>n;
    int x,y;
    while(f>>x>>y)
        a[x][y]=a[y][x]=1;
    f.close();
}
void df(int x){
    int s[101],v,i; // stiva
    //init stiva
    v=1; s[1]=x;
    viz[x]=1;
    //
    while(v){
        // caut noduri adiacente cu s[v]
      for(i=1;i<=n;i++)
            if(a[i][s[v]]==1)
                if(viz[i]!=0)
                     a[i][s[v]]=a[s[v]][i]=3;// inchidere ciclu
                else break;
        if(i<=n){
            a[i][s[v]]=a[s[v]][i]=2;// traversata
            s[++v]=i;
            viz[i]=1;
        }
        //elimin
        else v--;
    }
}
int conex(int x){
    int s[101],v,nr=1;
    int i;
    v=1;
    s[1]=x;
    viz[x]=2;
    while(v){
        for(i=1;i<=n;i++)
            if(!viz[i]&& a[i][s[v]]==1)
                        break;
        if(i<=n){
            s[++v]=i;
            viz[i]=1;
            nr++;
        }
        else v--;
    }
    return nr;
}
int main()
{
    reprezentare();
    int i,j,nr;
    for(i=1;i<=n;i++)
        if(viz[i]==0)
            conex(i);
    if(conex(1)!=n)
        for(i=2;i<=n;i++)
            if(viz[i]==2)
                a[1][i]=a[i][1]=1;
    for(i=1;i<=n;i++) viz[i]=0;
    //
    for(i=1;i<=n;i++)
        if(viz[i]==0)
            df(i);
    nr=0;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(a[i][j]==3)
                nr++;
    if(nr==0) cout<<"este arbore";
    else {
        for(i=1;i<n;i++)
            for(j=i+1;j<=n;j++)
                if(a[i][j]==3)
                    a[i][j]=a[j][i]=2;
    }
    return 0;
}
