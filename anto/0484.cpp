#include <iostream>
#include <fstream>
using namespace std;
int p3(int a){
    int s=0,f=2;
    while(a>1){
        if(a%f==0) s=s+f;
        while(a%f==0) a=a/f;
        f++;
    }
    return s;
}
void citire(int v[],int &n){
    int i;
    cout<<"n=";
    cin>>n;
    cout<<"introduceti "<<n<<" numere naturale=";
    for(i=1;i<=n;i++)
        cin>>v[i];
}
void sume(int v[],int n,int s[]){
    int i;
    for(i=1;i<=n;i++)
        s[i]=p3(v[i]);

}
int maxim(int s[],int n){
    int i;
    int Max=s[1];
    for(i=2;i<=n;i++)
        if(Max<s[i]) Max=s[i];
    return Max;
}
void afisare(int v[],int s[],int n,int Max){
    int i;
    ofstream g("f3.out");
    for(i=1;i<=n;i++)
        if(s[i]==Max) g<<v[i]<<" ";
    g.close();
}
int main()
{
    int n,v[100],s[100],Max;
    citire(v,n);
    sume(v,n,s);
    Max=maxim(s,n);
    afisare(v,s,n,Max);
    return 0;
}
