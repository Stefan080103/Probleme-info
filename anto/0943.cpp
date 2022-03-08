#include <iostream>
using namespace std;
int sub1(int z){
    int s=0,nr=0;
    while(z>0){
        if(z%10%2==0){
            s=s+z%10;
            nr++;
        }
        z=z/10;
    }
    if(s==0) return -1;
    else return s*1.0/nr;
}
int main()
{
    int z;
    cin>>z;
    cout<<sub1(z);
    return 0;
}
