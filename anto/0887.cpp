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
void backt(){
    int k=1;x[k]=0;
    while(k>0)
        if(x[k]<n){
            x[k]++;
            if(validare(k))
                if(k==n) afisare();
                else x[++k]=0;
            else;
        }else k--;
}
void backtINV(){
    int k=1;x[k]=n+1;
    while(k>0){
            x[k]--;
            if(x[k]>=1)
                if(validare(k))
                    if(k==n) afisare();
                    else x[++k]=n+1;
                else;
            else k--;
    }
}
    int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    backt();
    //backtINV();
    cout<<nr;
    return 0;
}
