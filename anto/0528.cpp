#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,y,b;
    cin>>x>>y;
    ofstream g("bac.txt");
    while(y>1){
        g<<y<<" ";
        b=y;
        y=x;
        x=3*x-b;
    }
    g<<1<<" "<<1;
    g.close();
    return 0;
}
