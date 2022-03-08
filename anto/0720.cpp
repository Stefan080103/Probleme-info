#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a,s;
    cout<<"Dati un numar natural=";
    cin>>a;
    ofstream g;
    s=0;
    while(a>0){
        s=s+a%10;
        a=a/10;
    }
    g.open("suma.txt");
    g<<s;
    g.close();
    return 0;
}
