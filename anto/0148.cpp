#include <iostream>
using namespace std;
int main()
{
    int x,y,a[100],*p=a;*q=a;
    cout<<"numarul de elemente ale vectorului="; cin>>n;
    cout<<"introduceti elementele vectorului"<<endl;
    for(i=1;i<=n;i++){cout<<"elementul "<<i<<"=";cin>>*p++;}
    cin>>x>>y;
    p=a;
    while(*p!=x) p++;
    while(*q!=y) q++;
    if(p>q) cout<<"valoarea "<<y<<" apare inaintea lui "<<x<<";
    else cout<<"valoarea "<<x<<" apare inaintea lui "<<y<<";
    return 0;
}
