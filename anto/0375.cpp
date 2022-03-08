#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,i,x,pr=1,aux,o;
    cin>>n;
    for (i=1;i<=n;i++){
        cin>>x;
        if((int)sqrt(x)==sqrt(x))
            //cubul nr patrate perfecte
            cout<<x*x*x<<' ';
        aux=x;
        o=0;
        while(aux!=0){
            o=o*10+aux%10;
            aux=aux/10;
        }
        if(x==o)
            pr=pr*x;
    }
    cout<<endl<<endl;
    cout<<pr;
    return 0;
}
