#include <iostream>
#include <fstream>
using namespace std;
ofstream g;
void palindrom(){
    int i,j;
    for (i=1;i<=9;i++)
        for(j=1;j<=9;j++){
            g<<i<<i<<j<<j<<j<<j<<i<<i;
            g<<endl;
        }
}
int main()
{
    g.open("bac.txt");
    palindrom();
    g.close();
    return 0;
}
