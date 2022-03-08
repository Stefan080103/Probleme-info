#include <iostream>

using namespace std;

int main()
{
    int a[10][10],i,j,k=1,*p;
    for(i=0;i<10;i++)
        for(j=0;j<10;j++) a[i][j]=k++;
    p=a[0];
    cout<<*p<<" "<<a[0][0]<<endl;
    return 0;
}
