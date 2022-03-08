#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a,o,u,n;
    ifstream f;
    f.open("natural.txt");
    f>>a;
    f.close();
    o=0;
    n=0;
    while(a>0){
        u=a%10;
        if(a%2!=0){
            o=o*10+u;
            n++;
        }
        a=a/10;
    }
    if(n==0) cout<<"nu exista cifre impare";
    else cout<<o;
    return 0;
}
