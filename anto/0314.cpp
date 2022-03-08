#include <iostream>
using namespace std;
int main()
{
    int n,p,a,i,exista;
    cin>>n>>p;
    exista=0;
    for(i=1;i<=n;i++){
        cin>>a;
        if(a%p==0)
            exista=1;
    }
    if(exista==1)
        cout<<"exista un multiplu al lui"<<" "<<p;
    else
        cout<<"nu exista un multiplu al lui"<<" "<<p;
    return 0;
}
