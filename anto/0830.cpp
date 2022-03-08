#include <iostream>
using namespace std;
int n,x[50],nr,v[50],m;
int valid (int k){
    int i;
    for (i=1;i<k;i++)
        if (x[i]==x[k])
            return 0;
    return 1;
}
void afisare(){
    for(int i=1;i<=m;i++)
        cout<<v[x[i]]<<" ";
    cout<<endl;
    nr++;
}
void aranj(){
    int k=1;
    x[k]=0;
    while (k>0)
        if (x[k]<n){
            x[k]++;
            if (valid (k))
                if (k==m)
                afisare ();
            else
                x[++k]=0;
    }
        else k--;
}
void aranjinvlex(){
    int k=1;
    x[k]=n+1;
    while (k>0)
        if (x[k]>1){
            x[k]--;
            if (valid (k))
                if (k==m)
                    afisare ();
            else {
                k++; x[k]=n+1;
            }
    }
        else k--;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(m=1;m<=n;m++){
        aranj();
        cout<<nr;
        nr=0;
        aranjinvlex();
        cout<<nr;
    }
    return 0;
}
