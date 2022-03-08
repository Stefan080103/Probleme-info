#include <iostream>
using namespace std;

int Minimum(int n, int m){
    int nr=0;
    while(nr<n && nr/2<m)
        nr=nr+2;
    if(nr>=n)
        return 0;
    else return n-nr;
}
int Maximum(int n, int m){
    int nr=0;
    while(nr*(nr-1)/2<m && nr<n)
        nr++;

    return n-nr;

}
int main(){
int n,m;
cin>>n>>m;
cout<<Minimum(n,m)<<' ';
cout<<Maximum(n,m);

return 0;

}
