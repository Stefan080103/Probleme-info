#include <iostream>
#include <fstream>
using namespace std;
int div2(int a){
    int i,y=0;
    for(i=1;i<=a;i++)
        if(a%i==0)
            y++;
    return y;
}
int main()
{
    int n,x,i;
    ifstream f("sir2.txt");
    f>>n;
    for(i=1;i<=n;i++){
        f>>x;
        if(div2(x)!=2)
            cout<<x<<" ";
    }
    return 0;
}
