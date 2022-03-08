#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a, b, c, x;
    ifstream f;
    ofstream g;
    f.open("intrare3.txt");
    f>>a>>b>>c;
    f.close();
    if(a<b){
        x=b;
        b=a;
        a=x;
    }
    if(a<c){
        x=c;
        c=a;
        a=x;
    }
    if(b<c){
        x=c;
        c=b;
        b=x;
    }
    g.open("iesire3.txt");
    g<<a<<b<<c;
    g.close();
    return 0;
}
