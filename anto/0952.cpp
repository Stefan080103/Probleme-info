#include <iostream>
using namespace std;
int sapte(int a,int b){
    int nr=0;
    while(a>0){
        if(a%10!=b) nr++;
        a=a/10;
    }
    return nr;
}
int main()
{
    int a,b;
    cout<<"introduceti un numar natural";
    cin>>a;
    cout<<"introduceti o cifra";
    cin>>b;
    cout<<sapte(a,b);
    return 0;
}
