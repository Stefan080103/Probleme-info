#include <iostream>
using namespace std;
int main(){
    int n,i,x,s=0,nr=0,p,j;
    cin>>n;
    for (i=1;i<=n;i++){
        cin>>x;
        p=0;
        for (j=2;j*j<=x;j++)
            if (x%j==0){
                p=j; break;
            }
        if (p==0 && x>1){
            s=s+x;
            nr++;
        }
    }
    cout<<s*1.0/nr;
    return 0;
}
