#include <iostream>
#include <fstream>
int a[101],c[101],n;
using namespace std;
int m[101],s[101];
int suma(int x){
    int s=0;
    while(x){
        s=s+x%10;
        x=x/10;
    }
    return s;
}
void citire(){
    ifstream f("f12.in");
    int x;
    while(f>>x){
        m[++n]=x;
        s[n]=suma(x);
    }
    f.close();
}
void inter(int &a, int &b){
    int aux=a;
    a=b;
    b=aux;
}
int main()
{
    citire();
    int i,j;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(s[i]>s[j]){
                inter(m[i],m[j]);
                inter(s[i],s[j]);
            }else
                if(s[i]==s[j])
                    if(m[i]<m[j])
                        inter(m[i],m[j]);
    for(i=1;i<=n;i++)
        cout<<m[i]<<" ";
    return 0;
}
