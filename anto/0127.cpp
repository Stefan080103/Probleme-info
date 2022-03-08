#include <iostream>
using namespace std;
void compar(float &x,float &y){
    if(x>y) x=x+y,y=x-y,x=x-y;
}
int main()
{
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    compar(a,b);  compar(a,c);  compar(a,d);
    compar(b,c);  compar(b,d);
    compar(c,d);
    cout<<a<<" "<<b<<" "<<c<<" "<<d;
    return 0;
}
