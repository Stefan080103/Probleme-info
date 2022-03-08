#include <iostream>
using namespace std;


///Ideea solutiei este ca atunci cand schimbi valorile vectorului,
///trebuie sa schimbi si pozitiile sale memorate in vectorul de freceventa

///Sfat: Nu incerca sa optimizezi, pana nu ai o solutie care merge ;)
///Varianta implementata cu MergeSort
int h[1000],o[1000],haux[1000],oaux[1000];

void Divizeaza(int s, int d, int &m)
{
    m=(s+d)/2;
}
void Combina(int s, int d, int m)
{
    int i=s,j=m+1,k=0;




    ///interclasare vectori

        while(i<=m && j<=d)
            {
                if(h[i]<h[j])
                        {
                            haux[++k]=h[i++];
                            oaux[k]=o[i-1];
                        }

                else
                     {
                         haux[++k]=h[j++];
                         oaux[k]=o[j-1];
                     }
            }


    ///reziduri
    while(i<=m)
         {   haux[++k]=h[i++];
             oaux[k]=o[i-1];
            }

    while(j<=d)
                {
                haux[++k]=h[j++];
                oaux[k]=o[j-1];
                }

    ///copiere elemente vector c in vector v

    k=1;

    for(i=s; i<=d; i++)
        {h[i]=haux[k++];
         o[i]=oaux[k-1];
        }

}


void MergeSort(int s, int d)
{

    int m;
    if(s<d)
    {
        Divizeaza(s,d,m);
        MergeSort(s,m);
        MergeSort(m+1,d);
        Combina(s,d,m);
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
            {o[i]=i;
             oaux[i]=i;
             }

    ///sortare vector
    MergeSort(1,n);


    ///afisare numere de ordine

    for(i=1; i<=n; i++)
        cout<<o[i]<<" ";




    return 0;
}

