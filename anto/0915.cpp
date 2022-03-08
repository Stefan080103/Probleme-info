#include <iostream>
#include <fstream>
using namespace std;
void prim(int x,int &ok){
    int i;
    ok=1;
    for(i=2;i*i<=x;i++)
        if(x%i==0) {ok=0;break;}
    if(ok==1 && x>1)
        ok=1;
    else ok=0;
}
int main()
{
    int ok,a;
    ofstream g("prime.txt");
    while(a!=0){
        cin>>a;
        prim(a,ok);
        if(ok==1) g<<a<<" ";
    }
    return 0;
}
