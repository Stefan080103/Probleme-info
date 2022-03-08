#include <iostream>
#include <fstream>
using namespace std;
int div1(int b){
    int s=0,i;
    for(i=2;i<=b/2;i++)
        if(b%i==0)
            s=s+i;
    return s;
}
int main()
{
    int x;
    ifstream f("sir1.txt");
    while(f>>x)
        if(div1(x)==0)
            cout<<x<<" ";
    return 0;
}
