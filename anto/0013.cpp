#include <iostream>
#include <fstream>
using namespace std;

///Se citesc două numere naturale nenule n și k.
///Să se afişeze, în ordine lexicografică,
///submulțimile de câte k elemente ale mulţimii {1,2,..,n}.
ifstream f("combinari.in");
ofstream g("combinari.out");

int v[16];
void Afisare(int lungime){

    int i;

    for(i=1; i<=lungime; i++)
        g<<v[i]<<' ';
        g<<endl;


}
int Valid(int x){
    int i;
    for(i=1; i<x; i++)
        if(v[i]>=v[x])
            return 0;
    return 1;

}
int Solutie(int x, int k){

    if(x==k)
        return 1;
    return 0;
}
void Bk(int n, int k, int x){

    int i;

    for(i=1; i<=n; i++){
        v[x]=i;
        if(Valid(x))
            if(Solutie(x,k))
                Afisare(x);
            else Bk(n,k,x+1);
    }


}

int main(){
    int n,k;
    f>>n>>k;
    Bk(n,k,1);

return 0;
}
