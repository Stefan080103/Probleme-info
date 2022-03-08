#include <iostream>
#include <cstring>
using namespace std;
void ctsxcifre(char x[3002]){
    if(strpbrk(x,"0123456789"))
        cout<<"DA,contine cifre"<<endl;
    else
        cout<<"NU,nu contine cifre"<<endl;
}
void catecifrectx(char x[3002]){
    char *p=strpbrk(x,"0123456789");
    int nr=0;
    while(p){
        nr++;
        p=strpbrk(p+1,"0123456789");
    }
    cout<<"x contine "<<nr<<" cifre "<<endl;
}
void continesirulxnumaicifre(char x[3002]){
    if(strspn(x,"0123456789")==strlen(x))
        cout<<"x contine numai cifre"<<endl;
    else
        cout<<"x contine si alte caractere "<<endl;
}
void esteadvcaxnuctniciocifra(char x[3002]){
    if(strcspn(x,"0123456789")==strlen(x))
        cout<<"da este adevarat ca x nu contine cifre";
    else
        cout<<"nu este adevarat ca x nu contine cifre";
}
int main()
{
    char x[3002];
    cin.getline(x,3002);
    ctsxcifre(x);
    catecifrectx(x);
    continesirulxnumaicifre(x);
    esteadvcaxnuctniciocifra(x);
    return 0;
}
