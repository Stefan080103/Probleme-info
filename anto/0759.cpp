#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a,c,s,u;
    ifstream f;
    f.open("f20.txt");
    f>>a>>c;
    f.close();
    s=0;
    while(a!=0){
        u=a%10;
        if(u==c)
            s=s+u;
        a=a/10;}
    cout<<s;
    return 0;
}
