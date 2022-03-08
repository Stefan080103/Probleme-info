#include <iostream>
#include <cstring>
using namespace std;
void p1(char c[],int i,int n){
    if(i<n){
        p1(c,i+1,n);
        if(strchr("aeiou",c[i]))
            cout<<c[i]<<' ';
    }
}
void p2(int n,int i){
    if(i<=n){
        cout<<i<<" ";
        p2(n,i+1);
        cout<<i<<" ";
    }else cout<<endl;
}
int main()
{
    char c[90];int n; cin>>n;
    cin.getline(c,90);
    int l=strlen(c);
    p1(c,0,l);
    cout<<endl;
    p2(n,0);
    return 0;
}
