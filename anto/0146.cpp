#include <iostream>

using namespace std;

int main()
{
    int x,a[100],*p,*q,i,n;
    cout<<"numarul de elemente ale vectorului=";
    cin>>n;
    cout<<"introduceti elementele vectorului";
    cout<<endl;
    for(i=1;i<=n;i++) {cout<<"elementul "<<i<<"= ";cin>>*p++; }
    cout<<"valoarea cautata="; cin>>x;
    p=a;
    while(*p!=x) p++;
    q=p; p++;
    while(*p!=x) p++;
    cout<<"intre primele ddoua elemente cu valoarea "<<x;
    cout<<"exista alte "<<p-q-1<<" elemente";
    return 0;
}
