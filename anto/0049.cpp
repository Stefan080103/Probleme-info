#include <iostream>
#include <fstream>
using namespace std;

ifstream f("soarece.in");
ofstream g("soarece.out");

int n,m,i1,j1,i2,j2,nr;
int di[]={0,1,0,-1},dj[]={1,0,-1,0};
int a[100][100];

int Solutie(int i, int j){
    return i==i2 && j==j2;
}
int Ok(int i, int j){
     ///obstacol sau intalnit deja
    if(a[i][j]==1)
            return 0;
    ///in afara matricei
    if(!(i>=1 && i<=n && j>=1 && j<=m))
            return 0;

}
void Bk(int ic, int jc){

    int i,iv,jv;

    ///parcurgere vecini
    for(i=0; i<=3; i++){
        iv=ic+di[i];
        jv=jc+dj[i];
        if(Ok(iv,jv)){
            a[iv][jv]=1;
            if(Solutie(iv,jv)) nr++;
            else Bk(iv,jv);
            a[iv][jv]=0;
        }
    }




}
int main(){

    f>>n>>m;
    int i,j;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            f>>a[i][j];


    f>>i1>>j1>>i2>>j2;
    a[i1][j1]=1;
    Bk(i1,j1);
    g<<nr;


return 0;
}
