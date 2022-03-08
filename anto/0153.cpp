#include <iostream>
using namespace std;
int main()
{
    int x1,d,x2,x3,nr=0,aux;
    cin>>x1;
    aux=x1;
    x2=aux%10*100+aux/10;
    aux=x2;
    x3=aux%10*100+aux/10;
    for(d=2;d*d<=x1;d++)
        if(x1%d==0){nr++;break;}
    for(d=2;d*d<=x2;d++)
        if(x2%d==0){nr++;break;}
    for(d=2;d*d<=x3;d++)
        if(x3%d==0){nr++;break;}
    if(nr==0) cout<<"da";
    else cout<<"nu";
    return 0;
}
