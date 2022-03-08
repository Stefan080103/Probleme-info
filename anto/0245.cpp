#include <iostream>
using namespace std;
int main()
{
    int a,y,p,u;
    cin>>a;
    y=0;
    p=1;
    do{
        u=a%10;
        if(u%2==0){
            y=y+u*p;
            p=p*10;}
        a=a/10;
    }while(a!=0);
    cout<<y;
    return 0;
}
