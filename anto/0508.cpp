#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,y,ok=1,k=0,a,b,z;
    ifstream f("bac.txt");
    f>>x>>y;
    while(f>>z){
        if(x%2) ok=0;
        if(y%2) ok=0;
        if(z%2) ok=0,k++;
        if(ok==0 && x%2==0 && y%2==0 && k>1)
            a=x,b=y,x=y,y=z;
        else x=y,y=z;
    }
    f.close();
    cout<<a<<" "<<b;
    return 0;
}
