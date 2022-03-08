#include <iostream>
using namespace std;
int n,a[10000],v[10000];
void citire(){
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
        cin>>a[i];
}
void numarare(){
    int i;
    for(i=1;i<=n;i++)
        v[a[i]]++;
    n=0;
    for(i=0;i<=9999;i++)
        while(v[i]>0)
            a[++n]=i,v[i]--;
}
int main()
{
    citire();
    numarare();
    int i;
    for(i=1;i<=n;i++)
            cout<<a[i]<< " ";
    return 0;
}
