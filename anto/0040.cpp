#include <iostream>
using namespace std;


/*** enunt: Se considera un vector de lungime n.Definim plierea
vectorului prin suprapunerea unei jumatati numita donatoare
peste cealalta jumatate numita receptoare cu precizarea ca daca numarul de
elemente este impar, elementul din mijloc este eliminat ***/




/**
a) fiind dat i=[1,n]
sa se determine daca elementul i poate fi element final ca rezultat al unor plieri succesive
***/
/*
int ok=1,i;

int Divizare(int s, int d)
{
    return (s+d)/2;
}

void Pliere(int s, int d, int v[])
{

    if(s<d)
    {   int lungime=d-s+1;

       int m=Divizare(s,d);

        if(lungime%2==0){

            Pliere(s,m,v);
            Pliere(m+1,d,v);
        }
        else {  if(m==i) ok=0;
                Pliere(s,m-1,v), Pliere(m+1,d,v);
        }
    }


}

*/


///b) sa se afiseze toate elementele finale posibile
/*

int Divizare(int s, int d)
{
    return (s+d)/2;
}

void Pliere(int s, int d, int v[])
{

    if(s<d)
    {   int lungime=d-s+1;

       int m=Divizare(s,d);

        if(lungime%2==0){

            Pliere(s,m,v);
            Pliere(m+1,d,v);
        }
        else Pliere(s,m-1,v), Pliere(m+1,d,v);
    }
    else
        cout<<v[s]<<endl;

}
*/

///fiind dat un element final, sa se figuereze pe ecran o succesiune de plieri prin care se ajunge la el
int element;
void Afisare(int s, int d, int v[]){
    for(int i=s; i<=d; i++)
        cout<<v[i]<<" ";
    cout<<endl;
    }
int Divizare(int s, int d)
{
    return (s+d)/2;
}

void Pliere(int s, int d, int v[])
{
    Afisare(s,d,v);
    if(s<d)
    {   int lungime=d-s+1;

       int m=Divizare(s,d);

        if(lungime%2==0){
            if(element<=m)
                    Pliere(s,m,v);
            else Pliere(m+1,d,v);
        }
        else {  if(element<m)
                Pliere(s,m-1,v);
                else Pliere(m+1,d,v);
        }
    }


}
int v[11]={0,1,2,3,4,5,6,17,8,9,10};
int main()
{   ///a)
     /*
    cin>>i;
    Pliere(1,5,v);
    if(ok) cout<<"Da";
        else cout<<"NU";
    */
    ///b)
    //Pliere(1,5,v);
    ///c)
    cin>>element;
    Pliere(1,10,v);

    return 0;
}
