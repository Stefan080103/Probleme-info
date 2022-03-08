#include <iostream>
using namespace std;
void opt(int x,int &s,int &p){
    s=0;p=1;
    int aux;
    while(x>0){
        aux=x%10;
        s=s+aux;
        p=p*aux;
        x=x/10;
    }
}
int main()
{
    int x,s,p;
    cin>>x;
    opt(x,s,p);
    cout<<s<<" "<<p;
    return 0;
}
