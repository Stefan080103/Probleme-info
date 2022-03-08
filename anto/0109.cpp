#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a, b, s;
    float x, m, p;
    ifstream f;
    ofstream g;
    f.open("numere.txt");
    f>>a>>b;
    f>>x;
    f.close();
    s=a+b;
    m=s/x;
    p=s/2.0;
    g.open("iesire.txt");
    g<<s<<endl<<m<<endl<<p;
    g.close();
    return 0;
}
