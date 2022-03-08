#include <iostream>
#include <cmath>
using namespace std;
void fii(int n){
    int i,j,x=sqrt(n);
    for(i=n;i>=x;i--)
        for(j=1;j<=x;j++)
            if(i*j==n && i!=j)
                cout<<"("<<i<<" "<<j<<")"<<" ";
}
int main()
{
    int n;
    cin>>n;
    fii(n);
    return 0;
}
