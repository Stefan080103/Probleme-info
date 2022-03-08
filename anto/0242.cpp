#include <iostream>
using namespace std;
int main()
{
    int x,o;
    cout<<"numar natural"; cin>>x;
    o=0;
    while(x>0){
        o=o*10+x%10;
        x=x/10;}
    cout<<"oglinditul este="<<o;
    return 0;
}
