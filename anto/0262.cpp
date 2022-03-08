#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,Par=1;
    ifstream f("bac.in");
    while(f>>x)
        if(x%2==0){
            Par=x;break;
        }
    if(Par==1) cout<<"nu exista";
    else cout<<Par;
    return 0;
}

