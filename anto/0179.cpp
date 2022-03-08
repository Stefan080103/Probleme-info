#include <iostream>
#include <cstring>
using namespace std;
char a[201],b[201],c[201];
//iterativ
void mici(){
    int i,l=strlen(a);
    for(i=0;i<l;i++)
        if(a[i]>='A' && a[i]<='Z')
            a[i]=a[i]+32;
}
//recursiv
void mic(int i,int l){
    if(i<l){
        if(b[i]>='A' && b[i]<='Z')
            b[i]=b[i]+32;
        mic(i+1,l);
    }
}
void mi(int i){
    if(i>=0){
        if(c[i]>='A' && c[i]<='Z')
            c[i]=c[i]+32;
        mi(i-1);
    }
}
int main()
{
    cout<<"dati un sir=";
    cin.getline(a,201);
    mici();
    cout<<a;
    strcpy(b,a);
    strcpy(c,a);
    cout<<endl;
    int l=strlen(b);
    mic(0,l);
    cout<<b;
    cout<<endl;
    mi(l);
    cout<<c;
    return 0;
}
