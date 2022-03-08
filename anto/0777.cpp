#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int b, k, u, s;
    float m;
    ifstream f;
    ofstream g;
    f.open("numar.txt");
    f>>b;
    f.close();
    k=0;
    s=0;
    do{
        u=b%10;
        if(u>=0)
            k++;
            s=s+u;
        b=b/10;
    }while(b!=0);
    m=s*1.0/k;
    g.open("media.txt");
    g<<m;
    g.close();
    return 0;
}
