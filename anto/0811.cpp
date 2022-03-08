#include <iostream>
#include <fstream>
using namespace std;
int n,m; int viz[101];
int a[101][101];
void reprezentare(){
    ifstream f("gno.txt");
    f>>n;
    int x,y;
    while(f>>x>>y)
        a[x][y]=a[y][x]=1;
    f.close();
}
int df(int x){
    int s[101],v;
    int i;
    s[1]=x;
    v=1;
    viz[x]=1;
    while(v){
        for(i=1;i<=n;i++)
            if(a[i][s[v]]==1)
                if(viz[i]!=0)
                    return 1;
                else break;
        if(i<=n){
            a[i][s[v]]=a[s[v]][i]=0;
            s[++v]=i;
            viz[x]=1;
        }else v--;
    }
}
int main()
{
    reprezentare();
    int i;
    for(i=1;i<=n;i++)
        if(viz[i]==0)
           if(df(i)==1){
                cout<<"graful este ciclic";
                break;
           }
    if(i>n) cout<<"graful este aciclic";
    return 0;
}
