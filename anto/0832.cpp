#include <iostream>
using namespace std;
int x[50],n,v[50],nr;
char c[30];
int valid (int k){
    int i;
    for (i=1;i<k;i++)
        if (x[i]==x[k])
            return 0;
    return 1;
}
void ordonare(){
    int i,j; char aux;
    for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
            if(c[i]>c[j]){
                aux=c[i];
                c[i]=c[j];
                c[j]=aux;
            }
}
void solutie (int k){
    int i;
    for (i=1;i<=k;i++)
        cout<<c[x[i]]<<' ';
    cout<<endl;
    nr++;
}
void aranj(){
    int k=1;
    x[k]=0;
    while (k>0)
        if (x[k]<n){
            x[k]++;
            if (valid (k)){
                solutie (k);
                if (k<n){
                    k++;
                    x[k]=0;
                }
            }
        }
        else
            k--;
}
void aranjinv(){
    int k=1;
    x[k]=n+1;
    while (k>0)
        if (x[k]>1){
            x[k]--;
            if (valid (k)){
                solutie (k);
                if (k<n){
                    k++;
                    x[k]=n+1;
                }
            }
        }
        else
            k--;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>c[i];
    ordonare();
    aranj();
    cout<<nr;
    //aranjinv();
    //cout<<nr;
    return 0;
}
