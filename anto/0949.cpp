#include <iostream>
using namespace std;
void minim(int b,int &a){
    a=10;
    do{
        if(b%10<a) a=b%10;
        b=b/10;
    }while(b);
}
int main()
{
    int a,b;
    cin>>b;
    minim(b,a);
    cout<<a;
    return 0;
}
