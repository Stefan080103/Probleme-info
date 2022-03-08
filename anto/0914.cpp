#include <iostream>
#include <fstream>
using namespace std;
int div3(int a,int b){
    int aux=a,aux1=b,z;
    while(a!=b)
        if(a>b) a=a-b;
        else b=b-a;
    z=aux*aux1/b;
    return z;
}
int main()
{
    int n,i,x[100];
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>x[i];
    ofstream g("multiplu.txt");
    for(i=1;i<=n-1;i++){
        g<<div3(x[i],x[i+1])<<" ";
    }
    g.close();
    return 0;
}
