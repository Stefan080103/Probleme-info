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
void aranj(int k){
    for(int i=1;i<=n;i++){
        x[k]=i;
        if(valid(k))
            if(x[k]==m)
                afisare();
            else aranj(k+1);
    }
}
void aranjinvlex(int k){
    for(int i=n;i>=1;i--){
        x[k]=i;
        if(valid(k))
            if(k==m)
                afisare();
            else aranjinvlex(k+1);
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(m=1;m<=n;m++){
        aranj(1);
        cout<<nr;
        nr=0;
        aranjinvlex(1);
        cout<<nr;
    }
    return 0;
}
