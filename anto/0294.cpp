#include <iostream>
using namespace std;
int main()
{
    int z,d=2,p,Max,f;
    cout<<"introduceti un numar natural ="; cin>>z;
    Max=0;
    while(z>1){
        p=0;
        while(z%d==0){
            z=z/d; p++;
        }
        if(p>Max){
            Max=p;
            f=d;
        }
        d++;
    }
    cout<<"factorul prim care apare la puterea cea mai mare este="<<f;
    return 0;
}
