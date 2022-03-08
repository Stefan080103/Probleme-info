#include <iostream>
#include <fstream>
using namespace std;
int y[68];
int main()
{
    int n,x[201],i,j,c;
    ifstream f("sir3.txt");
    f>>n;
    for(i=1;i<=n;i++)
        f>>x[i];
    f.close();
    for(i=1;i<=n;i++)
        if(i%3==0)
            y[i]=1;
    for(i=1;i<=n-1;i++)
        if(y[i]==1)
            for(j=i+1;j<=n;j++)
                if(y[j]==1)
                    if(x[i]>x[j]){
                        c=x[j];
                        x[j]=x[i];
                        x[i]=c;
                    }
    for(i=1;i<=n;i++)
        cout<<x[i]<<" ";
    return 0;
}
