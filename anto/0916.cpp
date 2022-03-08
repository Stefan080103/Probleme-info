#include <iostream>
#include <fstream>
using namespace std;
int prim(int x){
    int i;
    if(x<2) return 0;
    for(i=2;i*i<=x;i++)
        if(x%i==0) return 0;
    return 1;
}
int main()
{
    int a;
    ofstream g("prime.txt");
    while(a!=0){
        cin>>a;
        if(prim(a)==1) g<<a<<" ";
    }
    return 0;
}
