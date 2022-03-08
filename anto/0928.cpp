#include <iostream>
using namespace std;
int p5(int x){
    int s=0,p,d=2;
    while(x>1){
        p=0;
        while(x%d==0){
            x=x/d; p++;
        }
        s=s+p;
        d++;
    }
    return s;
}
int main()
{
    int x,aux,aux1,Max=-1;
    while(x!=0){
        cin>>x;
        aux1=p5(x);
        if(aux1>=Max){
            aux=x;
            Max=aux1;
        }
    }
    cout<<aux;
    return 0;
}
