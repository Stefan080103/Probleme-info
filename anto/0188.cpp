#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,m,b[16][21],i,j,ok=0;
    //citire tablou
    ifstream f("f2.txt");
        f>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            f>>b[i][j];
    f.close();
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            if(b[i][j]!=0)
                ok=1;
    if(ok!=0){
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++)
                cout<<b[i][j]<<" ";
            cout<<endl;
            }
    }else cout<<"Matricea are toate elementele egale cu 0";
    return 0;
}
