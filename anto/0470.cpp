#include <iostream>
using namespace std;
int v[200];
void citire (int n,int i){
    if(i<=n){
        cin>>v[i];
        citire(n,i+1);
    }
}
void scriere (int n,int i){
    if(i<=n){
        cout<<v[i];
        scriere(n,i+1);
    }
}
int sv(int i,int j){
    if(j<i) return 0;
    else return v[j]+sv(i,j-1);
}
int svp(int i){
    if(i<0) return 0;
    if(v[i]<0) return svp(i-1);
    else return svp(i-1)+v[i];
}
int main()
{
    int n;
    cin>>n;
    citire(n,1);
    cout<<sv(1,n)<<" "<<svp(n)<<endl;
    scriere(n,1);
    return 0;
}
