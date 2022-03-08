#include <iostream>
using namespace std;
int prime(int x){
    int i;
    if(x<2) return 0;
    for(i=2;i*i<=x;i++)
        if(x%i==0) return 0;
    return 1;
}
int main()
{
    int n,i,aux,nr=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>aux;
        if(prime(aux)==1)
            nr++;
    }
    cout<<nr;
    return 0;
}
