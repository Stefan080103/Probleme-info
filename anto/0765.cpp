#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int b,n,p,y;
    ofstream g;
    cin>>b;
    n=0;
    y=0;
    do{
        if(b%10%2!=0)
            n++;
        b=b/10;
        y++;
    }while(b!=0);
    if(n==y)
        p=-1;
    else
        p=-2;
    g.open("impare.out");
    g<<p;
    g.close();
    return 0;
}
