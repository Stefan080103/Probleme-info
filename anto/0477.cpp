#include <iostream>
using namespace std;
int v[200];
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
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    cout<<sv(1,n)<<" "<<svp(i);
    return 0;
}
