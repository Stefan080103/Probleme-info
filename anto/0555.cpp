#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a=0,b,n,i;
    ifstream f("numere.in");
    f>>n;
    while(f>>b){
        for(i=a+1;i<b;i++)
            cout<<i<<" ";
        a=b;
    }
    f.close();
    for(i=b+1;i<=n;i++)
        cout<<i<<" ";
    return 0;
}
