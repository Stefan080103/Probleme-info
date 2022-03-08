///https://www.pbinfo.ro/articole/16597/metoda-backtracking
#include <fstream>
using namespace std;

int x[10] ,n;

int Solutie(int k){
    /// x[k] verifică condițiile interne
    /// verificare dacă x[] reprezintă o soluție finală
    return 1; /// sau 0
}

int OK(int k){
    /// verificare conditii interne
    return 1; /// sau 0
}

void Afisare(int k)
{
    /// afișare/prelucrare soluția finală curentă
}

void Back(int k){
    for(int i = A ; i <= B ; ++i)
    {
        x[k]=i;
        if( OK(k) )
            if(Solutie(k))
                Afisare(k);
            else
                Back(k+1);
    }
}
int main(){
    ///citire date de intrare
    Back(1);
    return 0;
}
