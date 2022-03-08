#include <iostream>
using namespace std;
int n,a[101],p[101],b[101];
void citire(){
    int i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
}
void numarare(){
    int i,j;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(a[j]<a[i]) p[i]++;
            else p[j]++;
    for(i=1;i<=n;i++)
        b[p[i]+1]=a[i];
}
int main()
{
    citire();
    numarare();
    for(int i=1;i<=n;i++)
        cout<<b[i]<< " ";
    return 0;
}
