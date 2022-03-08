#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,Max;
    ifstream f("date.in");
    f>>x;
    Max=x;
    while(f>>x)
        if(x>Max)
            Max=x;
    f.close();
    cout<<Max;
    return 0;
}
