#include <iostream>
using namespace std;
void putere(int n , int &d, int &p){
    d=2;
    int Max=0,Max2=0;
    while(n!=1){
        p=0;
        while(n%d==0){
            n=n/d; p++;
        }
        if(p>=Max){
            Max=p;
            Max2=d;
        }
        d++;
    }
    d=Max2;
    p=Max;
}
int main()
{
    int n,p,d;
    cin>>n;
    putere(n,d,p);
    cout<<"d="<<d<<"   "<<"p="<<p;
    return 0;
}
