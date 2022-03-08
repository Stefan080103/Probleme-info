#include <iostream>
#include <fstream>
using namespace std;
int n, a[101][101];
void reprezentare(){
    int x,y;
    ifstream f("go.in");
    f>>n;
    while(f>>x>>y)
        a[x][y]=1;
    f.close();
}
int main()
{
    reprezentare();
    int k,i,j;
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                if(a[i][j]==0)
                    a[i][j]=a[i][k]*a[k][j];
    int s=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            s=s+a[i][j];
    if(s==n*n)
        cout<<"tare conex ";
    else cout<<"nu este tare conex";
    return 0;
}
