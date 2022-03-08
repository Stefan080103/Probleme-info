#include <iostream>
using namespace std;
void mixt(int b,int &x,float &y){
    int Min,Max;
    Min=Max=b%10;
    b=b/10;
    while(b>0){
        if(b%10>Max) Max=b%10;
        if(b%10<Min) Min=b%10;
        b=b/10;
    }
    x=Min*Max;
    y=(Min+Max)*1.0/2;
}
int main()
{
    int b,x;
    float y;
    cin>>b;
    mixt(b,x,y);
    cout<<x<<" "<<y;
    return 0;
}
