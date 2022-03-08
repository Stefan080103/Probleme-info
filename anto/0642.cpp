#include <iostream>
#include <fstream>
using namespace std;
int n, a[101][101];
void reprezentare(){
    ifstream f("GO1.in");
    f>>n;
    int x,y;
    while(f>>x>>y)
        a[x][y]=1;
    f.close();
}
void WHARSHALL(){
    int i,j,k;
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                if(a][i][j]==0)
                    a[i][j]=a[i][k]*a[k][j];

}
void afisare(){
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
}
viz[101];
void CTC(){
    ofstream g("CTC.txt");
    for(int x=1;x<=n;x++)
        if(viz[x]==0){
            //CTC din care face parte nodul x
            for(i=1;i<=n;i++)
                a[0][i]=a[x][i]*a[i][x];
            a[0][x]=1;
            //afisez componenta
            for(i=1;i<=n;i++)
                if(a[0][i]==1)
                    g<<i<<" ";
            g<<endl;
            //marchez nodurile include in aceasta ctc
            //restartez
            for(i=1;i<=n;i++)
                if(a[0][i]==1) viz[i]=1,a[0][i]=0;
        }
        g.close();
}
int main()
{
    reprezentare();
    afisare();
    WHARSHALL();
    cout<<endl;
    afisare();
    return 0;
}
