#include <iostream>
using namespace std;
int zece(int b){
    int nr=0;
    while(b>0){
        if(b%2==0) nr++;
        b=b/100;
    }
    return nr;
}
int main()
{
    int b;
    cin>>b;
    cout<<zece(b);
    return 0;
}
