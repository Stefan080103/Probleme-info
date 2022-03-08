#include <iostream>

using namespace std;
int prim(int x){
    if(x<2) return 0;
    int i;
    for(i=2;i*i<=x;i++)
        if(x%i==0) return 0;
    return 1;
}
int oglindit(int x){
    int o=0;
    while(x){
        o=o*10+x%10;
        x=x/10;
    }
    return o;
}
int main()
{
    for(int i=1001;i<=9999;i+=2)
        if(prim(oglindit(i))==1 && prim(i)==1)
           cout<<i<<" ";
    return 0;
}
