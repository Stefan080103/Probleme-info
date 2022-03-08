#include <iostream>
using namespace std;
int main()
{
    int n,i,p,j;
    cin>>n;
    for(i=2;i<=n;i++){
        p=0;
        for(j=2;j*j<=i;j++){
            if(i%j==0){
                p=j;break;
            }
        }
        if(i>1 && p==0)
                cout<<i<<" ";

    }
    return 0;
}
