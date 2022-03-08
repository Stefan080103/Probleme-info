#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    float a, b, x;
    ifstream f;
    ofstream g;
    f.open("intrare4.txt");
    f>>a>>b;
    f.close();
    g.open("iesire4.txt");
    if(a!=0){
        x=-b*1.0/a;
        g<<x;}
    else
        if(b==0)
            g<<"imposibil";
        else
            g<<"o infinitae de solutii";
    g.close();
    return 0;
}
