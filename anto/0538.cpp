#include <iostream>

using namespace std;

int main()
{
    int i,j,k,nr=0;
    for(i=1;i<=10;i++)
        for(j=1;j<=i;j++)
        for(k=1;k<=j;k++)
            nr++;
    cout<<nr;
    return 0;
}
