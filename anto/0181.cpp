#include <iostream>
using namespace std;
void a(int x){
    int i;
    for(i=0;i<=x;i=i+2)
        cout<<i<<" ";
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    a (x);
    cout<<endl;
    a (y);
    cout<<endl;
    a (z);
    return 0;
}
