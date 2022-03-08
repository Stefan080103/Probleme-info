#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,M1,M2;
    M1=M2=0;
    ifstream f("bac.txt");
    while(f>>x)
        if(x%2) M1=M2,M2=x;
    f.close();
    if(M1==0) cout<<"nu exista";
    else cout<<M1<<" "<<M2;
    return 0;
}
