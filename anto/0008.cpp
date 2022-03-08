#include <iostream>
using namespace std;

int v[100],c[100];

///Sortare prin MergesSort

void Divizeaza(int s, int d, int &m)
{
        m=(s+d)/2;
}
void Combina(int s,int m, int d)
{
    int i=s, j=m+1,k=1;

  ///cele doua jumatati sunt deja "aranjate" in asa fel incat primele sunt impare, iar ultimele sunt pare

  ///jumatatile pare;
    while(i<=m  && v[i]%2==1)

            c[k++]=v[i++];


     while(j<=d  && v[j]%2==1)

            c[k++]=v[j++];




    ///numere impare
      while(i<=m && v[i]%2==0)

            c[k++]=v[i++];




      while(j<=d && v[j]%2==0)

            c[k++]=v[j++];


     ///copiere elemente in vectorul care trebuie sortat

     k=1;

     for(i=s; i<=d; i++)
        v[i]=c[k++];

}

void MergeSort(int s, int d)
{
    int m;


     if(s<d)
    {
        Divizeaza(s,d,m);
        MergeSort(s,m);
        MergeSort(m+1,d);
        Combina(s,m,d);



    }




}




int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
        cin>>v[i];

    MergeSort(1,n);

      for(int i=1; i<=n; i++)
        cout<<v[i]<<" ";



    return 0;
}
