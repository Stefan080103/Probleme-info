#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a,o;
    ifstream f;
    f.open("natural.txt");
    f>>a;
    f.close();
    o=0;
    while(a>9){
        o=o*10+a%10;
        a=a/10;
    }
    cout<<o;
    return 0;
}
