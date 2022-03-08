#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,p,y;
    ifstream f;
    ofstream g;
    f.open("natural.txt");
    f>>y;
    f.close();
    n=0;
    p=0;
    do{
        if(y%10%3==0)
            n++;
        y=y/10;
    }while(y!=0);
    if(n>0)
        p=1;
    else
        p=0;
    g.open("trei.txt");
    g<<p;
    g.close();
    return 0;
}
