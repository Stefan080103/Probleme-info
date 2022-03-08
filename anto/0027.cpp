#include <iostream>
using namespace std;


///Ideea solutiei este ca atunci cand schimbi valorile vectorului,
///trebuie sa schimbi si pozitiile sale memorate in vectorul de freceventa

///Sfat: Nu incerca sa optimizezi, pana nu ai o solutie care merge ;)
///Sfat2: Fa o functie pentru orice bucata de cod de se repeta,
/// ^ e posibil sa gresesti daca incerci sa scrii manual de fiecare data
///Varianta implementata cu QuickSort
int h[1000],o[1000];

void interschimbare(int &a, int &b)
{
    h[0]=a;
    a=b;
    b=h[0];
}
int Partitionare(int s, int d)
{   ///fixare pivot primul element
    int pivot=h[s];
    int leftwall=s;

    int i;

    ///grupare elemente in 2 jumatati
    ///leftwall->mai mici decat pivot

    for(i=leftwall+1; i<=d; i++)

        if(h[i]<pivot)
        {
            leftwall++;
            interschimbare(h[i],h[leftwall]);
            interschimbare(o[i],o[leftwall]);
        }


   ///interschimbare pivot cu limita leftwall

   interschimbare(h[s],h[leftwall]);
   interschimbare(o[s],o[leftwall]);

    return leftwall;
}

void QuickSort(int s, int d)
{

    int m;
    if(s<d)
    {
        m=Partitionare(s,d);
        QuickSort(s,m-1);
        QuickSort(m+1,d);
    }


}


int main()
{
    int n;




    cin>>n;
    ///citire vector
    int i;
    for(i=1; i<=n; i++)
        cin>>h[i];

    ///initializare vector de frecventa
    for(i=1; i<=n; i++)
            o[i]=i;



    ///sortare vector
    QuickSort(1,n);


    ///afisare numere de ordine

    for(i=1; i<=n; i++)
        cout<<o[i]<<" ";




    return 0;
}
