// muchii cost minim - matrice de costuri
#include <iostream>
#include <fstream>
using namespace std;
const float INF=3000;
int n;
float a[50][50];
void init(){
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            a[i][j]=INF;
}
void reprezentare(){
    ifstream f("GNO.in");
    f>>n;
    int x,y; float c;
    init();
    while(f>>x>>y>>c)
        a[x][y]=a[y][x]=c;
    f.close();
}
float CostMinim(){
    int i,j;
    float Min=INF;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(Min>a[i][j])
                Min=a[i][j];
    return Min;
}
int main()
{
    reprezentare();
    float M=CostMinim();
    ofstream g("muchii.txt");
    int i,j;
    cout<<M;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(a[i][j]==M)
                g<<i<<" "<<j<<endl;
    g.close();
    return 0;
}
