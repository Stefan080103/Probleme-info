#include <iostream>
using namespace std;


void primalitate(int a,int &b){
    int d,ok=0;
    for(d=2;d*d<=a;d++)
        if(a%d==0) { ok=1 ; break; }
    if(ok==0 && a>1) b++;
}


int main()
{
    int n,nr=0,i,x;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        primalitate(x,nr);
    }
    cout<<nr;
    return 0;
}
