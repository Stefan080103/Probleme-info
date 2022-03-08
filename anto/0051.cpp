#include <iostream>
#include <fstream>
using namespace std;


int v[4000001], c[4000001];

///Se dau n numere naturale. Să se afișeze al k-ulea cel mai mic element din șir.

ifstream f("statisticiordine.in");
ofstream g("statisticiordine.out");


void Divizeaza(int s,int &m,int d)
{
    m=(s+d)/2;
}
void Combina(int s,int m,int d)
{
    long int i=s,j=m+1,k=0;

    while(i<=m && j<=d)
    {

        if(v[i]<v[j])
            c[++k]=v[i++];
        else c[++k]=v[j++];

    }
    while(i<=m)
        c[++k]=v[i++];
    while(j<=d)
        c[++k]=v[j++];

    k=1;
    for( i=s; i<=d; i++)
        v[i]=c[k++];


}
void MergeSort(int s, int d)
{
    long int m;

        if(s<d)
        {
            Divizeaza(s,m,d);
            MergeSort(s,m);
            MergeSort(m+1,d);
            Combina(s,m,d);
        }


}


int main()
{
    long int n,k,i;
    f>>n>>k;

    for( i=1; i<=n; i++)
        f>>v[i];

MergeSort(1,n); ///sortare crescator



       g<<v[k];

    f.close();
    g.close();






    return 0;
}
