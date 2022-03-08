#include <iostream>
using namespace std;
int opt(int x){
    int p,d=2,Max=0;
    while(x>1){
        p=0;
        while(x%d==0){
            p++;
            x=x/d;
        }
        if(p>Max) Max=p;
        d++;
    }
    return Max;
}
int main()
{
    int x;
    cin>>x;
    cout<<opt(x);
    return 0;
}
