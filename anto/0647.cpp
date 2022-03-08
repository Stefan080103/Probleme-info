#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int af=-1,x;
    ifstream f("bac.txt");
    while(f>>x)
        if(x%2==0)
            if(x>af)
                cout<<x<<" ",af=x;
    f.close();
    return 0;
}
