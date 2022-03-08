#include <iostream>
#include <fstream>
using namespace std;
///Problema permutari
///xi apartine multimii Ai={1,2,3...n}
///solutia = S{x1,x2,x3...xn}, xi apartine Ai
///Conditii interne: i=1,k-1, xi!=xk
///Conditii externe: k=n;
int n,v[11];

ifstream f("permutari.in");
ofstream g("permutari.out");
int Valid(int k){
    int i;

    for(i=1; i<k; i++)
         if(v[i]==v[k])
            return 0;

    return 1;
}

void Afisare(){
    int i;
    for(i=1; i<=n; i++)
        g<<v[i]<<' ';

    g<<endl;

}

int Solutie(int k){
    if(k==n)
        return 1;
    return 0;
}


void Bk(int k){
    int i;
    for( i=1; i<=n; i++){
        v[k]=i;
        if(Valid(k))
            if(Solutie(k))
                Afisare();
            else Bk(k+1);
    }

}
int main(){


f>>n;
Bk(1);



return 0;
}
