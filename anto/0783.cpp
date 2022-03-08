#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a, u, k;
    ifstream f;
    ofstream g;
    f.open("numar.txt");
    f>>a;
    f.close();
    k=0;
    do{
        u=a%10;
        if(u%2==0)
            k++;
        a=a/10;
    }while(a!=0);
    g.open("npare.txt");
    g<<k;
    g.close();
    return 0;
}
