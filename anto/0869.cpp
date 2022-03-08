#include <iostream>
using namespace std;

int main()
{
    int n, nr=0;
    cout<<"n=";
    cin>>n;
    while(n){
        n=(n&(n-1));
         nr++;
    }
    cout<<nr;
    return 0;
}
