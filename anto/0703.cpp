#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int z,o;
    ifstream f;
    f.open("natural.txt");
    f>>z;
    f.close();
    o=0;
    z=z/10;
    while(z>0){
        o=o*10+z%10;
        z=z/10;
    }
    cout<<o;
    return 0;
}
