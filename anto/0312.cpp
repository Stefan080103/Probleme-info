#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a,u;
    ifstream f;
    ofstream g;
    f.open ("natural.txt");
    f>>a;
    f.close();
    g.open("impare.txt");
    do{
        u=a%10;
        if(u%2!=0)
            g<<u<<"   ";
        a=a/10;
    }while(a!=0);
    g.close();
    return 0;
}
