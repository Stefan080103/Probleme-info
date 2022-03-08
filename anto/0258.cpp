#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,o;
    cin>>x;
    ofstream g("bac.txt");
    while(x>0){
        o=0;
        while(x>0){
            o=o*10+x%10;
            x=x/10;
        }
        g<<o<<" ";
        cin>>x;
    }
    g.close();
    return 0;
}
