#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char l,Max='a'-1;
    ifstream f("date.in");
    while(f.peek()!='\n' && f.peek()!=EOF){
        f>>l;
        if(l>Max) Max=l;
    }
    f.close();
    cout<<Max;
    return 0;
}
