#include <iostream>
#include <fstream>
using namespace std;

int A[1000001], B[1000001],c[1000001],dist_e[1000001],dist_e_B[1000001],Ord_Mutare_B[1000001],nr;
int n;
///Sortare MergeSort
int Divizeaza(int s, int d){
return (s+d)/2;
}
void Interclasare(int s, int d, int m){
int k=0,i=s,j=m+1;

    while(i<=m && j<=d){
        if(dist_e_B[Ord_Mutare_B[i]]<dist_e_B[Ord_Mutare_B[j]])
            c[++k]=Ord_Mutare_B[i++];
        else
            c[++k]=Ord_Mutare_B[j++];

        }

     while(i<=m)
        c[++k]=Ord_Mutare_B[i++];
     while(j<=d)
        c[++k]=Ord_Mutare_B[j++];


    k=1;
    for(i=s; i<=d; i++)
        Ord_Mutare_B[i]=c[k++];

}
void MergeSort(int s, int d){


    int m;

    if(s<d)
    {
        m=Divizeaza(s,d);
        MergeSort(s, m);
        MergeSort(m+1,d);
        Interclasare(s,d,m);

    }

}

void Aplicare_Mutari(){
    int i=1,j,pas,ok=0;

    while(!ok){

        while(dist_e_B[Ord_Mutare_B[i]]!=0){

            if(dist_e_B[Ord_Mutare_B[i]]<0)
                pas=1;
            else
                pas=-1;
            dist_e_B[Ord_Mutare_B[i]]+=pas;
            nr++;
            j=i+1;
            while(dist_e_B[Ord_Mutare_B[j]]==0)
            j+=(j*pas),ok=1;
            dist_e_B[Ord_Mutare_B[j]]+=(pas*(-1));
            MergeSort(1,n);
            }
        /*for(i=1; i<=6; i++)
             cout<<dist_e_B[i]<<' ';
             cout<<endl;*/
        i++;
    }

}



int main(){
int n,i;
ifstream f("permutariab.in");
ofstream g("permutariab.out");
///Citire Date de intrare
f>>n;
for(i=1; i<=n; i++){
        f>>A[i];
        dist_e[A[i]]=i;
        }


for(i=1; i<=n; i++){
        f>>B[i];
        dist_e[B[i]]=dist_e[B[i]]-i;
}


for(i=1; i<=n; i++)
    dist_e_B[i]=dist_e[B[i]];

for(i=1; i<=n; i++)
    Ord_Mutare_B[i]=i;

MergeSort(1,n);
/*for(i=1; i<=n; i++)
    cout<<dist_e_B[i]<<' ';  ///1 1 1 1 1 -5
    cout<<endl;
for(i=1; i<=n; i++)
    cout<<Ord_Mutare_B[i]<<' '; ///6 5 4 3 2 1*/
  //cout<<  dist_e_B[Ord_Mutare_B[1]];
   /* int pas;
     if(dist_e_B[Ord_Mutare_B[2]]<0)
                pas=1;
            else
                pas=-1;
            cout<<pas;*/
Aplicare_Mutari();
g<<nr;






return 0;
}

