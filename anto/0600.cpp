#include <iostream>
#include <fstream>
using namespace std;
int n,a[101][101];
void reprezentare(){
    ifstream f("GNO1.txt");
    int m,x,y,i;
    cin>>n>>m;
    for(i=1;i<=m;i++){
        f>>x>>y;
        a[x][y]=a[y][x]=1;
    }
    f.close();
}
int grad(int x){
    int i,s=0;
    for(i=1;i<=n;i++)
        s=s+a[x][i];
    return s;
}
int main()
{
    reprezentare();
    int i;
    ofstream g("izolate.txt");
    for(i=1;i<=n;i++)
        if(grad(i)==0)
            g<<i<<" ";
    return 0;
}
