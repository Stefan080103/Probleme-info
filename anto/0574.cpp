#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,s=0,Min;
    ifstream f("bac.txt");
    f>>x;
    s=x; Min=x;
    while(f>>x){
        s+=x;
        if(s<Min) Min=s;
        if(s>0) s=0;
    }
    f.close();
    cout<<Min;
    return 0;
}
