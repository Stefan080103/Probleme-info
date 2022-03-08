#include <iostream>
using namespace std;
void sub2(int x,int y,float &z){
    int Min;
    Min=y%10;
    while(y>0){
        if(y%10<Min)
            Min=y%10;
        y=y/10;
    }
    int nr=0,s=0;
    while(x>0){
        if(x%10>Min){
            s=s+x%10;
            nr++;
        }
        x=x/10;
    }
    if(s==0)
        z=-1;
    else z=s*1.0/nr;
}
int main()
{
    int x,y;
    float z;
    cin>>x>>y;
    sub2(x,y,z);
    cout<<z;
    return 0;
}
