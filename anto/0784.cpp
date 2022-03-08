#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int b, u, k;
    ifstream f;
    ofstream g;
    f.open("numar.txt");
    f>>b;
    f.close();
    k=0;
    do{
        u=b%10;
        if(u%2!=0)
            k++;
        b=b/10;
    }while(b!=0);
    g.open("f14.out");
    g<<k;
    g.close();
    return 0;
}
