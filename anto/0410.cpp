#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int p,q,i,j,b[50][50],l,c,x;
    ifstream f("mat.in");
    f>>p>>q;
    for(i=1;i<=p;i++)
        for(j=1;j<=q;j++)
            f>>b[i][j];
    f.close();
    cin>>l>>c>>x;
    x=x%10;
    for(i=p;i>=l;i--)
        for(j=1;j<=q;j++)
            b[i+1][j]=b[i][j];
    p++;
    for(j=1;j<=q;j++)
        b[l][j]=x;
    for(j=q;j>=c;j--)
        for(i=1;i<=p;i++)
            b[i][j-1]=b[i][j];
    q++;
    for(i=1;i<=p;i++)
        b[i][c]=x;
    ofstream g("mat.in");
    g<<p<<" "<<q<<endl;
    for(i=1;i<=p;i++){
        for(j=1;j<=q;j++)
            g<<b[i][j]<<" ";
        g<<endl;
    }
    g.close();
    return 0;
}
