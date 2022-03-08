#include <iostream>
#include <fstream>
using namespace std;
//declaratii subprograme utile
int oglindit(int);
int PalindromInterval(int,int);
int MaximPalindroame(int [],int);
void AfisareIntervale(int[],int[],int[],int);
void CitireIntervale(int [],int[],int [],int &);
//functia principala
int main()
{
    int a[51],b[51],nr[51],n;
    CitireIntervale(a,b,nr,n);
    AfisareIntervale(a,b,nr,n);
    return 0;
}
//subprogramele utile
int oglindit(int x){
    int o=0;
    while(x!=0){
        o=o*10+x%10;
        x=x/10;
    }
    return o;
}
int PalindromInterval(int a,int b){
    int nr=0;
    for(int i=a;i<=b;i++)
        if(i==oglindit(i))
            nr++;
    return nr;
}
void CitireIntervale(int a[],int b[],int nr[],int &n){
    int x,y;
    n=0;
    ifstream f("fis3.txt");
    while(f>>x>>y){
        n++;
        a[n]=x;
        b[n]=y;
        nr[n]=PalindromInterval(x,y);
    }
    f.close();
}
int MaximPalindroame(int v[],int n){
   int i,Max=v[1];
   for(i=2;i<=n;i++)
        if(v[i]>Max)
            Max=v[i];
    return Max;
}
void AfisareIntervale(int a[],int b[],int nr[],int n){
    int d=MaximPalindroame(nr,n);
    for(int i=1;i<=n;i++)
        if(nr[i]==d)
            cout<<"["<<a[i]<<","<<b[i]<<"]"<<endl;
}
