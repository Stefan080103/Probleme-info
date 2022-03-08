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
void BF(int x){
    int c[101],b,v;
    int i;
    b=v=1;
    c[1]=x;
    vizitare(x);
    while(b<=v){
        for(i=1;i<=n;i++)
            if(viz[i]==0 && a[i][c[b]]!=0){
                c[++v]=i;
                vizitare(i);
            }
        b++;
    }
}
int main()
{
    reprezentare();
    BF(3);
    return 0;
}
