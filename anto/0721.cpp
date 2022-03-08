#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int b,p;
    p=1;
    ifstream f;
    f.open("numar.txt");
    f>>b;
    f.close();
    do{
        p=p*(b%10);
        b=b/10;
    }while(b!=0);
    cout<<p;
    return 0;
}
