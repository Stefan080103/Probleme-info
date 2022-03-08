#include <iostream>
#include <fstream >
using namespace std;
int a[30];
ifstream f("vect.in");ofstream g("vect.out");
void citire(int n){
    if(n!=0){
        citire(n-1);
        f>>a[n];

    }
}
void scriere(int n){
    if(n!=0){
            g<<a[n]<<" ";
            scriere(n-1);
    }
}
void pi(int n){
    if (n!=0){
            if (a[n]%2==0)
                g<<a[n]<<' ';
            pi(n-1);
            if(a[n]%2!=0)
                g<<a[n]<<' ';
    }
    else  g<<endl;
}
int p(int n){
    if(n!=0)
        if(a[n]%2==0)
            return 1;
        else return p(n-1);
    else return 0;
}
int oc(int n){
    if(n!=0){
        if(a[n]>a[n+1])
            return 0;
        else return oc(n-1);
    }else return 1;
}
int b(int v,int s,int d){
    if(s>d) return 0;
    else {
        int m=(s+d)/2;
        if(a[m]==v) return m;
        else if(a[m]>v) return b(v,s,m-1);
            else return (v,m+1,d);
    }
}
int main()
{
    int n,v;
    f>>n;
    citire(n);
    f.close();
    scriere(n);
    g<<endl;
    pi(n);
    g.close();
    if(p(n)==0)
        cout<<"nu";
    else cout<<"da";
    if(oc(n-1)==0) cout<<endl<<"nu";
    else cout<<endl<<"da";
    cout<<endl;
    cin>>v;
    if(b(v,1,n)==0) cout<<"nu";
    else cout<<"da";
    return 0;
}
