#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a,p;
    cin>>a;
    ofstream g;
    g.open("cifre.txt");
    do{
        p=a;
        g<<p%10<<" ";
        a=a/100;
    }while(a!=0);
    g.close();
    return 0;
}
