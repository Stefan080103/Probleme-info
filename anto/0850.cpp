#include <iostream>
#include <fstream>
using namespace std;
int n, x[50],v[50],nr;
int validare(int k){
     int i;
     for(i=1;i<k;i++)
        if(x[k]==x[i]) return 0;
     return 1;
}
void afisare(){
    for(int i=1;i<=n;i++)
        cout<<v[x[i]]<<" ";
    cout<<endl;
    nr++;
}
void backt(int k){

    for(int i=1;i<=n;i++){
        x[k]=i;
        if(validare(k))
            if(k==n) afisare();
            else backt(k+1);
    }
}
void backtINV(int k){
    for(int i=n;i>=1;i--){
        x[k]=i;
        if(validare(k))
            if(k==n) afisare();
            else backtINV(k+1);
    }
}
    int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    backt(1);
    //backtINV(1);
    cout<<nr;
    return 0;
}

