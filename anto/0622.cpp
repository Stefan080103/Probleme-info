#include <iostream>

using namespace std;
int n,m,a[25][30];
void citire(int i,int j){
    if(i<=n)
        if(j<=m){
            cin>>a[i][j]; citire(i,j+1);
        }
        else citire(i+1,1);
}
void afis(int i,int j){
    if(i<=n)
        if(j<=m){
            cout<<a[i][j]<<" "; afis(i,j+1);
        }
        else {cout<<endl; afis(i+1,1);}
}
void afisl(int i,int y){
    if(i<=n){
        cout<<a[y][i]<<" ";
        afisl(i+1,y);
    }
}
void afisc(int j,int y){
    if(j<=m){
        cout<<a[j][m]<<" ";
        afisl(j+1,y);
    }
}
int main()
{
    int x,z;
    cin>>n>>m>>x>>z;
    citire(1,1);
    cout<<endl;
    afis(1,1);
    cout<<endl;
    afisl(1,x);
    cout<<endl;
    afisc(1,z);
    return 0;
}
