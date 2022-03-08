#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int Min, b, aux, u, z,o;
    ifstream f;
    f.open("numere.txt");
    f>>b;
    f.close();
    aux=b;
    Min=10;
    while(b!=0){
        u=b%10;
        if(u<Min)
            Min=u;
        b=b/10;
    }
    o=0;
    do{
        z=aux%10;
        if(z>Min)
            o=o*10+z;
        aux=aux/10;
    }while(aux!=0);
    cout<<o;
    return 0;
}
