#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a, u, n, Min;
    ifstream f;
    ofstream g;
    f.open("numar.txt");
    f>>a;
    f.close();
    Min=10;
    do{
        u=a%10;
        if(u<Min){
            Min=u;
            n=1;
        }
        else
            if(u==Min)
                n++;
        a=a/10;
    }while(a!=0);
    g.open("fis.out");
    g<<Min<<"  "<<n;
    g.close();
    return 0;
}

