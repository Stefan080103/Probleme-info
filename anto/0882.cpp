#include <iostream>
using namespace std;
int n,m,x[51],v[51];
int prim(int b){
    if(b<2) return 0;
    for(int i=2;i*i<=b;i++)
        if(b%i==0) return 0;
    return 1;
}
void afisare(){
    for(int i=1;i<=n;i++)
        cout<<v[x[i]]<<" ";
    cout<<endl;
}
int validare(int k){
    int i;
    for(i=1;i<k;i++)
        if (x[k]==x[i]) return 0;
    return 1;
}
void backk (){

    int k=1;
    x[k]=0;
    while (k>0)
        if (x[k]<m){
            x[k]++;
            if(validare(k))
                if (k==n)
                    afisare ();
                else x[++k]=0;
        }else k--;
}
int main()
{
    cin>>n>>m;
    int j=0,i=10;
    while(j<m){
        if(prim(i)) v[++j]=i;
        i++;
    }
    backk();
    return 0;
}
