#include <iostream>
using namespace std;


///Observatie: La problemele de tipul Divide et Impera, trebuie sa gandesti in anasamblu si sa determini cazul de baza (cand ne oprim din apelat functia recursiv)
/// lasa micro-manegementul pentru verificare



///* la aceasta problema, procedeul de rezolvare e asa
/// Ia cele n-1 discuri de pe tija sursa si pune le pe tija de nabevra
/// Muta cel ramas(care e cel mai mare) pe tija destinatie
/// Muta cele n-1 discuri de pe tija de manevra si pune-le pe tija destinatie
///cazul de baza e evident, cand n==1, adica cand a ramas pe tija doar cel mai mare disc
void hanoi( int n, char a, char b, char c)
{


    if(n==1) ///cazul de baza, cand muti ultimul disc
        cout<<a<<"--> pe tija "<<b<<endl;


    else
    {
        hanoi(n-1, a, c, b); ///muta cele n-1 discuri pe tija c,
                              ///dupa cum observi al doilea caracter e tija destinatie in functie, iar al treilea este tija suport, cele 3 tije fac schimb

        cout<<a<<"--> pe tija "<<b<<endl; ///mutarea asta face parte din procesul mutarii celor n-1 discuri

        hanoi(n-1,c, b, a);


    }


}

int main()
{

int n; char a='A', b='B', c='C';
cin>>n;
hanoi(n, a, b, c);



}
