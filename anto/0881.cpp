#include <iostream>
#include <fstream>
using namespace std;
ofstream g;
int n, x[101];
int valid( int k){
    int i;
    for(i=1;i<=k-1;i++)
        if(x[k]==x[i])
            return 0;
    return 1;
}
void solutie(){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            if(j==x[i])
                g<<"1"<<"   ";
            else g<<"0"<<"   ";
        g<<endl<<endl;
    }
    g<<endl<<endl;
}
int main()
{
    int k=1; long long nr=0;
    cin>>n;
    x[k]=0;
    g.open("back.txt");
    while(k>0)
        if(x[k]<n){
            x[k]=x[k]+1;
            if(valid(k))
                if(k==n){
                    solutie();
                    nr++;
                }
                else x[++k]=0;
        }else k--;
    g.close();
    cout<<"sunt "<<nr<<" solutii pentru o matrice patratica cu "<<n<<" coloane"<<endl;
    return 0;
}
