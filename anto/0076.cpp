#include <iostream>

using namespace std;
int prim(int x){
    int i;
    for(i=2;i*i<=x;i++)
        if(x%i==0) return 0;
    return 1;
}
int a[100][100];
int main()
{
    int i,j,nr=0;
    for(i=1;i<=50;i++)
        for(j=1;j<=50;j++)
            if((50*(i-1)+j)%7 && (50*(i-1)+j)%13) a[i][j]=0;
            else a[i][j]=1;
    for(i=1;i<=50;i++)
        for(j=1;j<=49;j++)
            if(a[i][j]==0 &&a[i][j+1]==0) nr++;
    for(i=1;i<=49;i++)
        for(j=1;j<=50;j++)
            if(a[i][j]==0 &&a[i+1][j]==0) nr++;

    cout<<nr;
    return 0;
}
