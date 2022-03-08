#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,MaxA,MaxB;
    ifstream f;
    f.open("A.txt");
    f>>MaxA;
    while(f>>x) if(x>MaxA) MaxA=x;
    f.close();
    f.open("B.txt");
    f>>MaxB;
    while(f>>x) if(x>MaxB) MaxB=x;
    f.close();
    if(MaxA>MaxB) cout<<"exista majorant";
    else cout<<"nu exista majorant";
    return 0;
}
