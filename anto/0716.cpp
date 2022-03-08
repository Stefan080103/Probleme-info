#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int b,p,s;
    cin>>b;
    b=b/10;
    ofstream g;
    s=0;
    do{
        p=b;
        s=s+p%10;
        b=b/100;
    }while(b!=0);
    g.open("fout.txt");
    g<<s;
    g.close();
    return 0;
}
