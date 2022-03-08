#include <iostream>
using namespace std;

int c[1000001],Ord_Mutare_B[1000001],suma;

int Divizeaza(int s, int d){
return (s+d)/2;
}
void Interclasare(int s, int d, int m){
int k=0,i=s,j=m+1;

    while(i<=m && j<=d){
        if(Ord_Mutare_B[i]<=Ord_Mutare_B[j])
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
int main(){
int n,i;
cin>>n;
for(i=1; i<=n; i++)
        cin>>Ord_Mutare_B[i];
 MergeSort(1,n);

cout<<endl;
for(i=1; i<=n; i++)
        cout<<Ord_Mutare_B[i];



return 0;
}
