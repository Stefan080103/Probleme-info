#include <iostream>

using namespace std;
int main()
{
    int a[9][9];
    int i,j;
    for(i=1;i<=5;i++)
        for(j=1;j<=5;j++)
            if(j<5-i+1) a[i][j]=1;
            else if(j==5-i+1) a[i][j]=3;
                    else a[i][j]=2;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
