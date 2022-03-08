#include <iostream>
#include <fstream>
using namespace std;
int viz[101],a[101][101],n;
void reprezentare(){
    int x,y;
    ifstream f("GNO.txt");
    f>>n;
    while(f>>x>>y)
        a[x][y]=a[y][x]=1;
    f.close();
}
void vizitare(int x){
    viz[x]=1;
}
int conex(int x){
    int c[101],b,v,nr=1;
    int i;
    b=v=1;
    c[1]=x;
    vizitare(x);
    while(b<=v){
        for(i=1;i<=n;i++)
            if(viz[i]==0 && a[i][c[b]]!=0){
                c[++v]=i;
                vizitare(i);
                nr++;
            }
        b++;
    }
    return nr;
}
int main()
{
    reprezentare();
    if(conex(3)!=n) cout<<"nu este conex";
    else cout<<"conex";
    return 0;
}
