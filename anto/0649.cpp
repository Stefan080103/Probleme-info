#include <iostream>
#include <fstream>
using namespace std;
int x[102],n;
char y[101];
void del1(int p){
    for(int i=p+1;i<=n;i++)
        x[i-1]=x[i]
    n--;
}
void del2(int p){
    for(int i=p+1;i<n;i++)
        y[i-1]=y[i];
}
int main()
{
    int aux,i;
    ifstream f("bac.in");
    f>>x[1]; n=1;
    while(f>>y[n]>>aux)
        x[++n]=aux;
    f.close();
    for(i=1;i<=n;i++)
         cout<<x[i]<<" ";
    cout<<endl;
    for(i=1;i<n;i++) cout<<y[i]<<" ";
    for(i=1;i<n;i++)
        if(y[i]=='*' ){
            x[i]=x[i]*x[i+1]; del1(i+1);del2(i);}
        else
            if(y[i]=='/'){
            x[i]=x[i]/x[i+1]; del1(i+1);del2(i);}
            else if(y[i]=='%'){
            x[i]=x[i]%x[i+1]; del1(i+1);del2(i);}
    for(i=1;i<=n;i++)
        if(x[i]) break;
    if(i>n) cout<<0;
    else {
        for(i=1;i<n;i++)
            if(y[i]=='+'){
            x[i]=x[i]+x[i+1]; del1(i+1);del2(i);}
            }else {
            x[i]=x[i]-x[i+1]; del1(i+1);del2(i);}
    cout<<x;
    return 0;
}
