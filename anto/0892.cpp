#include <iostream>
#include <fstream>
using namespace std;
int a[101],n,m;
void citire(){
    int i;
    ifstream f("doi.in");
    f>>n>>m;
    for(i=1;i<=n;i++)
        f>>a[i];
    f.close();
}
void schimb(int &x,int &y){
    int aux=x;
    x=y;
    y=aux;
}
void insertie(){
    int i,aux,j;
    for(i=2;i<n;i++){
        aux=a[i];
        for(j=i-1;j>=1;j--)
            if(a[j]>aux)
                a[j+1]=a[j];
            else break;
        a[j+1]=aux;
    }
}
int main()
{
    citire();
    insertie();
    for(int i=1;i<=n;i++)
        cout<<a[i]<< " ";
    cout<<endl;
    int s,sm,x,i;
    s=sm=0;
    x=n-m;
    for(i=1;i<=m;i++)
        s=s+a[i];
    cout<<s;
    for(i=n;i>x;i--)
        sm=sm+a[i];
    cout<<sm;
    ofstream g("doi.out");
    g<<sm<<" "<<s;
    g.close();
    return 0;
}
