#include <iostream>
using namespace std;
int main()
{
    int m,n,z;
    cin>>n;
    m=0;
    while(n>0){
        z=n%10;
        if(z%2!=0){
            m++; break;}
        n=n/10;
    }
    if(m!=0)
        cout<<z;
    else cout<<"nu exista";
    return 0;
}
