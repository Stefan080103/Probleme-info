#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
using namespace std;

ifstream f("matrice_div_et_imp.in");
ofstream g("matrice_div_et_imp.out");


void ParcurgereMatrice(int ls, int cs, int ld, int cd, int a[512][512]){


    ///cazul de baza==> cand matricea are un singur element
    int nr_elemente=cd-cs+1;
    if(nr_elemente==1)
        g<<a[ls][cs]<<' ';
    else
            {   ///divizare in 4 submatrici
                ///OBSERVATIE: TINE CONT CA LIMITA INFERIOARA NU E NEAPARAT 1,
                ///ANALOG LIMITEI SUPERIOARE

                ParcurgereMatrice(ls, cs, (ls+ld)/2, (cs+cd)/2,a);
                ParcurgereMatrice((ls+ld)/2+1, (cs+cd)/2+1, ld, cd,a);
                ParcurgereMatrice(ls, (cs+cd)/2+1, (ls+ld)/2, cd,a);
                ParcurgereMatrice((ls+ld)/2+1, cs, ld,(cs+cd)/2,a);
            }

}

///ridicare la putere in timp logaritmic
int Putere(int baza, int exponent)
{   int aux;
    if(exponent==0)
            return 1;
    else if(exponent==1)
            return baza;
    else if(exponent%2==0){
        aux=Putere(baza, exponent/2);
        return aux*aux;
    }
    else {
        aux=Putere(baza,(exponent-1)/2);
        return baza*aux*aux;
    }

}
int a[512][512];
int main(){
    int i,j,n,m;

     ///calculare dimensiune matrice
    f>>n;

    m=Putere(2,n);

    ///citire matrice

    for(i=1; i<=m; i++)
        for(j=1; j<=m; j++)
            f>>a[i][j];

    ParcurgereMatrice(1,1,m,m,a);





}
