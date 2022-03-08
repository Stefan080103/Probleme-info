#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char x;
    int nr,r;
    ifstream f("date.in");
    nr=r=0;
    while(f.get(x)){
        cout<<x;
        nr++;
        if(f.peek()=='\n' || f.peek()==EOF)
            r++;
    }
    f.close();
    cout<<endl<<nr<<" "<<r;
    return 0;
}
