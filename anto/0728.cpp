#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a, b, c, d;
    istream f;
    ofstream g;
    f.open("intra2.txt");
    f>>a>>b>>c>>d;
    f.close();
    g.open("iesire2.txt");
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        g<<"poate exista o multime";
    else
        g<<"nu poate exista multimea";
    g.close();
    return 0;
}
