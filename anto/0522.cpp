#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,y,Max=-1,nr=1;
    ifstream f("date.in");
    f>>x;
    while(f>>y){
        if(x<y) nr++,x=y;
        else if(nr>Max) Max=nr,nr=1,x=y;
    }
    f.close();
    cout<<Max;
    return 0;
}
