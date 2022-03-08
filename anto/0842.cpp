#include <iostream>
using namespace std;
int x[50],n,v[50],nr;
int valid (int k){
    int i;
    for (i=1;i<k;i++)
        if (x[i]==x[k])
            return 0;
    return 1;
}
void solutie (int k){
    int i;
    for (i=1;i<=k;i++)
        cout<<v[x[i]]<<' ';
    cout<<endl;
    nr++;
}
void aranj(int k){
    for(int i=1;i<=n;i++){
        x[k]=i;
        if(valid(k)){
            solutie(k);
            if(k<n) aranj(k+1);
        }
    }
}
void aranjinv(int k){
        for(int i=n;i>=1;i--){
            x[k]=i;
            if(valid(k)){
                solutie(k);
                if(k<n) aranjinv(k+1);
            }
        }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    aranj(1);
    cout<<nr;
    //aranjinv(1);
    //cout<<nr;
    return 0;
}
