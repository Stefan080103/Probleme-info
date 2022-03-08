#include <iostream>
#include <fstream>
using namespace std;
int n,x,b[101];
void citire(){
    ifstream f("bac.in");
    while(f>>x)
        b[++n]=x;
    f.close();
}
int prim(int x){
    int i;
    if(x<2) return 0;
    for(i=2;i*i<=n;i++)
        if(x%i==0) return 0;
    return 1;
}
void stergere(int p){
    int i;
    for(i=p+1;i<=n;i++)
        b[i-1]=b[i];
    n--;
}
int main()
{
    citire();
    int i,Min;
    int k=0;
    for(i=1;i<=n;i++)
        if(prim(b[i])){
               k++;
                if(k==1 || b[i]<Min) Min=b[i];
        }
    if(k)
        for(i=n;i>=1;i--)
            if(b[i]==Min)
                stergere(i);
    ofstream g("bac.out");
    for(i=1;i<=n;i++)
            g<<b[i]<<" ";
    g.close();
    return 0;
}
