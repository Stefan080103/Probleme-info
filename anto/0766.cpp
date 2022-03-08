#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    float a;
    int n;
    ofstream g;
    cin>>a;
     n=0;
    do{
        a=(int)(a/10);
        n=n+1;
    }while(a!=0);
    g.open("num.txt");
    g<<n;
    g.close();
    return 0;
}
