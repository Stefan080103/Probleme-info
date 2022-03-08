#include <iostream>
using namespace std;
int p;
void verificare(int z){
    int d;
    for(d=2;d*d<=z;d++)
        if(z%d==0){p=d;break;}
}
int main()
{
    int x1,x2,x3,aux;
    cin>>x1;
    aux=x1;
    x2=aux%10*100+aux/10;
    aux=x2;
    x3=aux%10*100+aux/10;
    verificare(x1);
    verificare(x2);
    verificare(x3);
    if(p==0) cout<<"da";
    else cout<<"nu";
    return 0;
}
