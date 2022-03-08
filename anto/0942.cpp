#include <iostream>
using namespace std;
int p5(int a){
    while(a>9) a=a/10;
    if(a%2==0) return 1;
    else return 0;
}
int main()
{
    int a;
    cin>>a;
    cout<<p5(a);
    return 0;
}
