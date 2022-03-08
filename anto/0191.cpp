#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a[21][21],b[441],m=0,n,i,j;
    cin>>n;
    cout<<"introduceti "<<n<<" linii cu "<<n<<" elemente :";
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            b[++m]=a[i][j];
    ofstream g("f3.txt");
    for(i=1;i<=m;i++)
        g<<b[i]<<" ";
    g.close();
    return 0;
}
