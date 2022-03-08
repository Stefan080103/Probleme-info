#include <iostream>
#include <fstream>
using namespace std;
int n,a[101];
void citire(){
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
        cin>>a[i];
}
void elimin(int &p,int &u){
    int i;
    for(i=1;i<=n;i++)
        if(a[i]%2==0){
            p=i;break;
        }
    for(i=n;i>=1;i--)
        if(a[i]%2!=0){
            u=i;break;
        }
}

int main()
{
    citire();
    int i,p=0,u=0;
    elimin(p,u);
    ofstream g("bac.out");
    for(i=n;i>=1;i--)
        if(i!=p && i!=u)
            g<<a[i]<<" ";
    g.close();
    return 0;
}
