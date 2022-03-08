#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,i,j;
    char c;
    //citirea datelor
    cin>>n;
    cin.get();
    cin.get(c);
    ofstream g("caracter.txt");
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
            g<<c;
        g<<endl;
    }
    g.close();
    return 0;
}
