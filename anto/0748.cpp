#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int b,o,u,n;
    ifstream f;
    f.open("natural.txt");
    f>>b;
    f.close();
    o=0;
    n=0;
    while(b>0){
        u=b%10;
        if(b%2==0){
            o=o*10+u;
            n++;
        }
        b=b/10;
    }
    if(n==0) cout<<"nu exista cifre pare";
    else cout<<o;
    return 0;
}
