#include <iostream>

using namespace std;
int sir(int n){
    if(n==1) return 1;
    else
        if(n==2) return 1;
        else return 3*sir(n-1)-sir(n-2);

}
void afisare(int x,int n){
    int t=sir(n);
    if(t<x) afisare(x,n+1);
    cout<<t<<" ";


}
int main()
{
    int x,y;
    cin>>x>>y;
    if(y==1) cout<<1;
    else{
        afisare(y,3);
        cout<<" "<<1<<" "<<1;
    }
    return 0;
}
