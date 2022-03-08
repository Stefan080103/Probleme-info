#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,a,u;
    ifstream f("bac.txt");
    while(f>>x){
        a=x;
        u=a%10;
        while(a>9)
            a=a/10;
        if(u==a)
            cout<<x<<" ";
    }
    f.close();
    return 0;
}
