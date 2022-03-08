#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int z,u,Min;
    ifstream f;
    f.open("numar.txt");
    f>>z;
    f.close();
    Min=z%10;
    z=z/10;
    while(z>0){
        u=z%10;
        if(u<Min)
            Min=u;
        z=z/10;
    }
    cout<<Min;
    return 0;
}
