#include <iostream>
using namespace std;
int Fmax(int x,int f){
    if(x>1)
        if(x%f==0) return Fmax(x/f,f);
        else return Fmax(x,f+1);
    else return f;
}
int s_fact(int x,int f){
    if(x>1)
        if(x%f==0)
            if(x/f%f==0) return s_fact(x/f,f);
            else return  f+s_fact(x/f,f+1);
        else return s_fact(x,f+1);
    else return 0;
}
int produs(int x,int f){
    if(x>1)
        if(x%f==0)
            if(x/f%f==0) return produs(x/f,f);
            else return  f*produs(x/f,f+1);
        else return produs(x,f+1);
    else return 1;
}
int numararef(int x,int f){
    if(x>1)
        if(x%f==0)
            if(x/f%f==0) return numararef(x/f,f);
            else return  1+numararef(x/f,f+1);
        else return numararef(x,f+1);
    else return 0;
}
int propriu(int n){
    int i;
    if(n<2) return 0;
    for(i=2;i*i<=n;i++)
        if(n%i==0)
            return i;
    return 0;
}
int fp(int n){
    int i;
    if(n<2) return 0;
    for(i=2;i*i<=n;i++)
        if(n%i==0)
            return i;
    return n;
}
int propr(int n,int i){
    if(i*i<=n)
        if(n%i==0)
            return i;
        else return propr(n,i+1);
    else return 0;
   }
int micf(int n,int i){
    if(i*i<=n)
        if(n%i==0)
            return i;
        else return micf(n,i+1);
    else return n;
   }
int primal(int n,int i){
    if(i*i<n)
        if(n%i==0) return 0;
        else return primal(n,i+1);
    else if(n<2 ) return 0;
        else return 1;
}
int cmmdc(int a,int b){
    if(a%b!=0)
        return cmmdc(b,a%b);
    else return b;
}
int cmdc(int a,int b){
    if(a!=b)
        if(a>b) return cmmdc(a-b,b);
        else return cmmdc(a,b-a);
    else return b;
}
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    if(n==1) cout<<"nu exista";
    else if(n==0) cout<<"are o infinitate de factori";
        else cout<<Fmax(n,2);
    cout<<endl;
    cout<<s_fact(n,2);
    cout<<endl;
    cout<<produs(n,2);
    cout<<endl;
    cout<<numararef(n,2);
    cout<<endl;
    cout<<propriu(n);
    cout<<endl;
    cout<<fp(n);
    cout<<endl;
    cout<<propr(n,2);
    cout<<endl;
    cout<<micf(n,2);
    cout<<endl;
    cout<<primal(n,2);
    cout<<endl;
    cout<<cmmdc(a,b);
    cout<<endl;
    cout<<cmdc(a,b);
    return 0;
}
