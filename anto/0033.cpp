#include <iostream>
#include <fstream>
using namespace std;


///problema se rezuma la a verifica
///daca un nr este patrat perfect
///numar foarte mare-->Max 500 cifre

///pentru a rezolva problema, vom crea un tip nou de date
typedef int NumarMare[501];

///initializare numar mare

void Initialiare_NrMic(NumarMare x, int x){
     int lungime=0,k=1;
     do {
        lungime++;
        x[k]=x%10;
        x=x/10;
     }while(x>0);
    x[0]=lungime;
}

void Initializare_NrMare(NumarMare x, NumarMare y){

///rezultat 1 daca x>y , 2 daca y>x si 0 daca x=y;
void Comparare_NrMare(NumarMare x, NumarMare y, int &rezultat){

    if(x[0]>y[0])
        rezultat=1;
    else if(x[0]<y[0])
        rezultat=2;
    else if(x[0]==y[0]){
        int k=1;
        while(x[k]==y[k])
                k++;
        if(k>x[0])
            rezultat=0;
        else if(x[k]>y[k])
             rezultat=1;
        else rezultat=2;
    }

}

void Impartire_NrMic(NumarMare x, int impartitor){



}

void Comparare_NrMare()
    int lungime,y;

    lungime=y[0];

    for(i=1; i<=lungime; i++)
        x[i]=y[i];

    x[0]=lungime;
}
int main(){



return 0;
}
