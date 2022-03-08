#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,Max,u;
    ifstream f;
    f.open("numar.txt");
    f>>n;
    f.close();
    while(n>=1000)
        n=n/10;
    Max=n%10;
    n=n/10;
    while(n>0){
        u=n%10;
        if(u>Max)
            Max=u;
        n=n/10;}
    cout<<Max;
    return 0;
}
