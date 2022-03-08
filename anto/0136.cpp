#include <iostream>
#include <fstream>
using namespace std;
int n,a[51];
void citire(){
    int aux;
    ifstream f("fis4.txt");
    while(f>>aux)
        a[++n]=aux;
    f.close();
}
int factorial(int x){
    int s,p,i;
    if(x==1) return 1;
    if(x==0) return 0;
    s=0;
    while(x>0){
        p=1;
        for(i=2;i<=x%10;i++)
            p=p*i;
        s=s+p;
        x=x/10;
    }
    return s;
}
int main()
{
    int i,a,b,aux,x;
    cin>>a>>b;
    citire();
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    for(i=1;i<=n;i++){
        aux=factorial(a[i]);
        if(a<aux && b>aux){
            x=a[i];
            a[i]=aux;
            aux=x;
        }
    }
    cout<<endl;
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
