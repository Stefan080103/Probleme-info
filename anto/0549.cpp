#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,y;
    ifstream f("bac.txt");
    f>>x;
    while(f>>y){
        if(x<y){
            f>>y;
            cout<<y<<" ";
            while(f>>y) cout<<y<<" ";
        }
        else cout<<x<<" ",x=y;
    }
    f.close();
    return 0;
}
