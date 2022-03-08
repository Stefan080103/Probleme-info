#include <iostream>
#include <fstream>
using namespace std;
int prime(int a){
    int i;
    if(a<2) return 0;
    for(i=2;i*i<=a;i++)
        if(a%i==0) return 0;
    return 1;
}
int oglindit(int a){
    int o=0;
    while(a>0){
        o=o*10+a%10;
        a=a/10;
    }
    return o;
}
int main()
{
    int x,y,z;
    ifstream f("f2.txt");
    f>>x>>y>>z;
    f.close();
    ofstream g("f2.out");
    if(prime(x)==1) g<<oglindit(x)<<" ";
    if(prime(y)==1) g<<oglindit(y)<<" ";
    if(prime(z)==1) g<<oglindit(z);
    g.close();
    return 0;
}
