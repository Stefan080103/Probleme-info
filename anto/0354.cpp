#include <iostream>
#include <fstream>
using namespace std;
int main()
{   int n,a[20][20],nr,aux,Max=-1,i,j;
    ifstream f("mat.txt");
    f>>n;
     for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                f>>a[i][j];
    f.close();
     for(i=1;i<=n;i++){
            nr=0;
            for(j=1;j<=n;j++)
                if(a[i][j]%2==0)
                    nr++;
            if(Max<nr){
                Max=nr;
                aux=i;
            }
     }
     ofstream g("mat.out");
     g<<aux;
     g.close();
    return 0;
}
