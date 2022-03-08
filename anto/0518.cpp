#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    int x,k=0,M=0,ok=0,nr=0;
    ifstream f("bac.txt");
    while(f>>x){
        if(sqrt(x)==(int)sqrt(x)) nr++,k++,ok=1;
        else if(nr) k++,ok=0;
        if(nr>1)
            if(k>M && ok) M=k;
    }
    f.close();
    cout<<M;
    return 0;
}
