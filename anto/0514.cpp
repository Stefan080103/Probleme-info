#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    ofstream g("bac.txt");
    g<<x<<" ";
    while(x!=1){
        if(x%2) x=(1+x)/2,g<<x<<" ";
        else if(x%2==0) x=x-1,g<<x<<" ";
    }
    g.close();
    return 0;
}
