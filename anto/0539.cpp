#include <iostream>
#include <fstream>
using namespace std;
void binar(int a[],int n,int v, int s, int &p,int &poz){
    int m,x=1,y=n;
    p=poz=0;
    while(x<=y){
        m=(x+y)/2;
        if(a[m]==v){
            p=m; break;
        }
        else
            if(v<a[m]) y=m-1;
            else x=m+1;
    }
    if(p==0)
        if(s==i) poz=x;
        else poz=y;
}
int main()
{
    int n,a[100],x,y,p,poz,i;
    ifstream f("bac.txt");
    f>>n;
    for(i=1;i<=n;i++) f>>a[i];
    oftsream g("bac.out");
    while(f>>x>>y){
        binar(a,n,x,1,p,poz);
        if(p) g<<a[p]<<" ";
        else
            if(poz<=n && a[poz]<=y) g<<a[poz]<<" ";
            else g<<-1<<" ";
        binar(a,n,y,-1,p,poz);
        if(p) g<<a[p]<<endl;
        else
            if(poz>=1 && a[poz]>=x) g<<a[poz]<<endl;
            else g<<-1<<endl;
    }
    g.close();
    f.close();
    return 0;
}
