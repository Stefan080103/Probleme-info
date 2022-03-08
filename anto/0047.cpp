#include <iostream>
using namespace std;

///varianta recursiva
int putere(int baza, int exponent)
{   int aux;
    if(exponent==0)
        return 1;
    else if(exponent==1)
        return baza;
    else if(exponent%2==1){
            aux=putere(baza, (exponent-1)/2);
            return baza*aux*aux;
    }
        else {
            aux=putere(baza, exponent/2);
            return aux*aux;
            }
}

int main(){
int baza,exponent;

cout<<"Introduceti baza:";
cin>>baza;
cout<<"\nIntroduceti exponentul:";
cin>>exponent;

cout<<"\nRezultat:"<<putere(baza,exponent);





return 0;}
