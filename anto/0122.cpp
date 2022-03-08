#include <iostream>
using namespace std;

int cmmmc(int a,int b){
    int aux=a , aux2=b;
    while(a!=b)
        if(a>b) a=a-b;
        else b=b-a;
    aux=aux*aux2/b;
    return aux;
}


int main()
{
    int s,m,i,p;
    cout<<"s="; cin>>s;
    cout<<"m="; cin>>m;
    for(i=0;i<=s/2;i++){
        p=s-i;
        if( cmmmc(i,p) ==m) cout<<s<<" "<<p<<endl;
    }
    return 0;
}
