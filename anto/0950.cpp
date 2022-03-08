#include <iostream>
using namespace std;
int oglindit(int x){
    int o=0;
    while(x>0){
        o=o*10+x%10;
        x=x/10;
    }
    return o;
}
int main()
{
    int x;
    cin>>x;
    cout<<oglindit(x);
    return 0;
}
