#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream g("trei.txt");
    g<<5;
    g.close();
    return 0;
}
