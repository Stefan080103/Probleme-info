#include <iostream>
using namespace std;
int v[31][31];
int citire(int&n,int &m,int v[][31]){
    int i,j;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>a[i][j];
}
int verificarel(int l,int m,int v[][31]){
    int j;
    for(j=1;j<=m;j++)
        if(v[l][j-1]>v[l][j])
            return 0;
    return 1;
}
int main()
{

}
