#include <iostream>
using namespace std;

int v[100],c[100];

void Divizeaza(int s, int d, int &m)
{
    m=(s+d)/2;
}
void Combina(int s, int d, int m, int cresc)
{
    int i=s,j=m+1,k=0;




    ///interclasare vectori
if(cresc==1)
    {
        while(i<=m && j<=d)
            {
                if(v[i]<v[j])
                    c[++k]=v[i++];
                else
                    c[++k]=v[j++];
            }
    }

    else
    {
        while(i<=m && j<=d)
            {
                if(v[i]>v[j])
                    c[++k]=v[i++];
                else
                    c[++k]=v[j++];
            }
    }


    ///reziduri
    while(i<=m)
        c[++k]=v[i++];

    while(j<=d)
        c[++k]=v[j++];

    ///copiere elemente vector c in vector v

    k=1;

    for(i=s; i<=d; i++)
        v[i]=c[k++];

}


void MergeSort(int s, int d,int cresc)
{

    int m;
    if(s<d)
    {
        Divizeaza(s,d,m);
        MergeSort(s,m,cresc);
        MergeSort(m+1,d,cresc);
        Combina(s,d,m,cresc);
    }



}


int main()
{   ///declarare +citire date de intrare
    int n,k;

    cin>>n>>k;
    ///citire vector
    int i;
    for(i=1; i<=n; i++)
        cin>>v[i];

    ///sortare primele k elemente, crescator
    MergeSort(1,k,1);

    ///sortare ultime n-k elemente
    MergeSort(k+1,n,0);



    ///afisare

    for(i=1; i<=n; i++)
        cout<<v[i]<<" ";




    return 0;
}
