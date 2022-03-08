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
    cout<<x<<" ";
    viz[x]=1;
}
void DF(int x){
    int s[101],v;
    int i;
    s[1]=x;
    v=1; vizitare(x);
    while(v){
        for(i=1;i<=n;i++)
            if(!viz[i] && a[i][s[v]])
                break;
        if(i<=n){
            s[++v]=i;
            vizitare(i);
        }else v--;
    }
}
int main()
{
    reprezentare();
    DF(3);
    return 0;
}
