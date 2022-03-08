#include <iostream>
#include <fstream>
using namespace std;
int n,x[21],nr;
char a[9][21];
void citire(){
    cin>>n;
    cin.get();
    int i;
    for(i=1;i<=n;i++)
        cin>>a[i];
}
int valid(int k){
    for(int i=1;i<k;i++)
        if(x[i]==x[k])
            return 0;
    return 1;
}
void afisare(){
    int i;
    for(i=1;i<=n;i++)
        cout<<a[x[i]]<<" ";
    cout<<endl;
    nr++;
}
void backt(int k){
    int i;
    for(i=1;i<=n;i++){
        x[k]=i;
        if(valid(k))
            if(k==n)
                afisare();
            else
                backt(k+1);
        else ;
    }
}
int main()
{
    citire();
    backt(1);
    cout<<endl<<nr;
    return 0;
}
