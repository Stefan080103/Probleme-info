#include <iostream>
using namespace std;
int cm(int a,int b){
    if(a%b==0) return b;
    else return cm(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<cm(a,b);
    return 0;
}
