#include <iostream>
#include <fstream>
using namespace std;
int n, a[101][101],d[101];
void reprezentare(){
    ifstream f("GNO3.txt");
    f>>n;
    int l,i,j,x;
    for(i=1;i,=n;i++){
        f>>l;
        for(j=1;j<=l;j++){
            f>>x;
            a[i][x]=1;
        }
    }
    f.close();
}
int grad(int i){
    int s=0,j;
    for(j=1;j<=n;j++)
        s=s+a[i][j];
    return s;
}
int main()
{
    reprezentare();
    //calcul grade
    int i;
    for(i=1;i<=n;i++)
        d[i]=grad[i];
    //gard maxim
    int Max=d[1];
    for(i=2;i<=n;i++)
        if(d[i]>Max)
        Max=d[i];
    ofstream g("maxim.txt");
    for(i=1;i<=n;i++)
        if(d[i]==Max) g<<i<<' ';
    g.close();
    return 0;
}
