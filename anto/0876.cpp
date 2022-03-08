#include <iostream>
#include <fstream>
using namespace std;
int n,x[50];
struct elev{ char nume[20]; float h;};
elev a[100];
void citire(){
    ifstream f("sport.in");
    int i;
    f>>n; f.get();
    for(i=1;i<=n;i++)
        f>>a[i].nume>>a[i].h;
    f.close();
}
int validare(int k){
    int i;
    if(a[x[k]].h<a[x[k-1]].h) return 0;
    for(i=1;i<=k-1;i++)
        if(x[k]==x[i])
            return 0;
    return 1;
}
void afisare(){
    for(int i=1;i<=n;i++)
        cout<<a[x[i]].nume<<" ";
    cout<<endl;
}
void backt(){
    int k=1;
    x[k]=0;
    while(k>0)
        if(x[k]<n){
            x[k]++;
            if(validare(k))
                if(k==n) afisare();
                else x[++k]=0;
            else;
        }else k--;
}
int main()
{
    citire();
    backt();
    return 0;
}
