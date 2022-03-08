#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char x;
    int nr1=0,nr2=0;
    ifstream f("date1.in");
    while(f.get(x))
        if(f.peek()=='\n' || f.peek()==EOF)
            nr1++;
    f.close();
    f.open("date2.in");
    while(f.get(x))
        if(f.peek()=='\n' || f.peek()==EOF)
            nr2++;
    f.close();
    if(nr1==nr2)
        cout<<"DA";
    else cout<<"NU";
    return 0;
}
