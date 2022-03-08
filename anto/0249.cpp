#include <iostream>
using namespace std;
int main()
{
    int d=2, n, s=0, nr=0,p;
    cout<<"dati un numar natural nenul";
    cin>>n;
    while(n>1){
        p=0;
        while(n%d==0){
            n=n/d;
            p++;
        }
        if(p>0){
            s=s+d;
            nr++;
        }
        d++;
    }
    if(nr==0)
        cout<<"nu exista";
    else
        cout<<s*1.0/nr ;
    return 0;
}
