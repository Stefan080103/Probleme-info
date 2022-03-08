#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    float a, b, c;
    ifstream f;
    ofstream g;
    f.open("reale.txt")
    f>>a>>b>>c;
    f.close();
    Max=a;
    if(b>Max) Max=b;
    if(c>Max) Max=c;

    return 0;
}
