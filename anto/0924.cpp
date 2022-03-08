#include <iostream>
using namespace std;
float zece(int b){
    int nr=0,d=2,s=0;
    float m;
    while(b>1){
        if(b%d==0){
                s=s+d;
                nr++;
                while(b%d==0){
                    b=b/d;
                }
        }
        d++;
    }
    m=s*1.0/nr;
    return m;
}
int main()
{
    float x;
    cin>>x;
    cout<<zece(x);
    return 0;
}
