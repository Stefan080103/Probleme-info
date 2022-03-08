#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,p=0,ok=1;
    ifstream f("date.in");
    while(f>>x)
        if(x%2)
            if(x>p) p=x;
            else {ok=0; break;}
    f.close();
    if(ok==1) cout<<"da";
    else cout<<"nu";
    return 0;
}
