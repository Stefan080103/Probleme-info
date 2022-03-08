#include <iostream>
using namespace std;
void  noua(int y,int &a){
    a=0;
    while(y>0){
        if(y%10%2==0) a++;
        y=y/10;
    }
}
int main()
{
    int y,a;
    cin>>y;
    noua(y,a);
    cout<<a;
    return 0;
}
