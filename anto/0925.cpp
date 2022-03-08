#include <iostream>
using namespace std;
void  mixt(int b,int &x,int &y){
    int p,d=2;
    x=y=0;
    while(b>1){
        p=0;
        while(b%d==0){
            b=b/d; p++;
        }
        if(p%2==0) x++;
        else y++;
        d++;
    }
}
int main()
{
    int x,y,a;
    cin>>a;
    mixt(a,x,y);
    cout<<"numarul factorilor primi la putere para este"<<" "<<x<<endl;
    cout<<" numarul factorilor primi la putere impara este"<<" "<<y;
    return 0;
}
