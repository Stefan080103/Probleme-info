#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,Max,Min;
    ifstream f("bac.txt");
    f>>x;
    Max=x;
    Min=x;
    while(f>>x)
        if(x>Max)
            Max=x;
        else if(x<Min)
                Min=x;
    f.close();
    cout<<Min<<endl<<Max;
    return 0;
}
