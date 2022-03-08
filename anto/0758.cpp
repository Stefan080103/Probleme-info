#include <iostream>

using namespace std;

int main()
{
    int a, s, n;
    float m;
    cin>>a;
    s=0;
    n=0;
    do{
        if(a%10%2!=0){
            n++;
            s=s+a%10;}
        a=a/10;
    }while(a!=0);
    m=s/n;
    cout<<m;
    return 0;
}
