#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x ,s, u;
    ifstream f;
    f.open("numar.txt");
    f>>x;
    f.close();
    s=0;
    do{
        u=x%10;
        if(u%2!=0)
            s=s+u;
        x=x/10;
    }while(x!=0);
    cout<<s;
    return 0;
}
