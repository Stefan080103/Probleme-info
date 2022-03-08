#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,x[101],i;
    ifstream f;
    ofstream g;
    f.open("sir.txt");
    f>>n;
    f.close();
    for(i=1;i<=n;i++)
        f>>x[i];
    g.open("rezultat.txt")

    return 0;
}
