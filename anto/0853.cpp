#include <iostream>
using namespace std;
int n,m,x[16],nr=0,a[16];
int valid (int k){
    int i;
    for (i=1;i<k;i++)
        if (x[i]==x[k])
            return 0;
    return 1;
}
void afisare (){
    int i;
    for (i=1;i<=m;i++)
        cout<<x[i]<<' ';
    cout<<endl;
    nr++;
}
void backk (){

    int k=1;
    x[k]=0;
    while (k>0)
        if (x[k]<n){
            x[k]++;
            if (valid (k))
                if (k==m)
                    afisare ();
                else {
                    k++;
                    x[k]=0;
                }
    }
        else k--;
}
int main()
{

    cin>>n>>m;
    backk ();
    cout<<endl<<nr;
    return 0;
}
