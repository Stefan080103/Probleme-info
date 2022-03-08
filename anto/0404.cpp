#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,nr=0,r=0;
    ifstream f("date.in");
    while(f.peek()!=EOF){
        f>>x;
        nr++;
        if(f.peek()=='\n' || f.peek()==EOF)
            r++;
    }
    f.close();
    cout<<r;
    return 0;
}
