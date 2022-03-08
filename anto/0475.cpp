#include <iostream>

using namespace std;
void prime(int x,int y){
    int aux,i,j,ok=0;
    if(x>y)
        aux=x,x=y,y=aux;
    for(i=x;i<=y;i++){
        ok=0;
        for(j=2;j*j<=i;j++)
            if(i%j==0){
                ok=1; break;
            }
        if(!ok) cout<<i<<" ";
    }
}
int main()
{
    int x,y;
    cin>>x>>y;
    prime(x,y);
    return 0;
}
