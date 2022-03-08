#include <iostream>
using namespace std;
int main()
{
    int n,i,f0,f1,f2;
    cin>>n;
    f0=f1=f2=1;
    for(i=2;i<=n;i++){
        f2=f1+f0;
        f0=f1;
        f1=f2;
    }
    cout<<"cel de-al " <<" "<<n<<"-lea termen Fibonnaci este: "<<" "<<f2;
    return 0;
}
