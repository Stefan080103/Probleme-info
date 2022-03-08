#include <iostream>

using namespace std;
int sapte(int a,int b){
    int p=0;
    while(a%b==0){ p++; a=a/b;}
    return p;

}
int factorminim(int n){
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return i;
    return n;
}
int main()
{
    int n,mic,x,i,s=0;
    cin>>n;
    mic=factorminim(n);
    for(i=1;i<=n;i++){
        cin>>x;
        s=s+sapte(x,mic);
    }
    cout<<s;
    return 0;
}
