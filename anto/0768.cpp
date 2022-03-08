#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int b,n,p,y;
    ifstream f;
    ofstream g;
    f.open("numar.txt");
    f>>b;
    f.close();
    n=0;
    y=0;
    do{
        if(b%10%2==0)
            n++;
        b=b/10;
        y++;
    }while(b!=0);
    if(n==y)
        p=1;
    else
        p=0;
    g.open("pare.out");
    g<<p;
    g.close();
    return 0;
}
