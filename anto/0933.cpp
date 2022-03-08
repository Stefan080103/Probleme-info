#include <iostream>
#include <fstream>
using namespace std;
int n,x[21],nr,m;
char a[9][21];
ofstream g;
void citire(){
    cin>>n>>m;
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
        g<<a[x[i]]<<" ";
    g<<endl;
    nr++;
}
void backt(int k){
    int i;
    for(i=1;i<=n;i++){
        x[k]=i;
        if(valid(k))
            if(k==m)
                afisare();
            else
                backt(k+1);
        else ;
    }
}
int main()
{
    citire();
    g.open("aranj.txt");
    backt(1);
    g.close();
    cout<<endl<<nr;
    return 0;
}
