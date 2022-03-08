#include <fstream>
#include <iostream>
#include <queue>
using namespace std;

ifstream f("leet.txt");

int n,m;
int a[100][100],distanta[100][100];
int dj[]={1,0,-1,0},di[]={0,1,0,-1};

void Lee(int is, int js){


    queue< pair <int, int> > Q;

    Q.push(make_pair(is, js));
    distanta[is][js]=1;

    while(!Q.empty()){
        int ic=Q.front().first;
        int jc=Q.front().second;

        for(int i=0; i<=3; i++){
            int vecin_i=ic+di[i],vecin_j=jc+dj[i];

            if(vecin_j>=1 && vecin_j<=m && vecin_i>=1 && vecin_i<=n) ///e in matrice
                if(a[vecin_i][vecin_j]==0) ///nu e obstacol
                    if(distanta[vecin_i][vecin_j]==0) {
                        distanta[vecin_i][vecin_j]=distanta[ic][jc]+1;
                        Q.push(make_pair(vecin_i,vecin_j));
                        }
            }

            Q.pop();

    }
}
void ReconstructieTraseu(int ic, int jc){
    ///daca am ajuns la start, afisam  coordonatele
    if(distanta[ic][jc]==1)
            cout<<ic<<' '<<jc<<endl;

    ///altfel verificam toti vecinii
    else{
         int ok=0;
         int vecin_i,vecin_j;
         int i=0;
            while(!ok){
            vecin_i=ic+di[i];
            vecin_j=jc+dj[i];

            if(distanta[vecin_i][vecin_j]==distanta[ic][jc]-1)
                ok=1;

            i++;

         }


       ReconstructieTraseu(vecin_i,vecin_j);
       cout<<ic<<' '<<jc<<endl;

    }




}
int main(){

///citire date de intrare
    f>>n>>m;

    int i,j;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            f>>a[i][j];

    ///citire coord start si final traseu
    int starti,startj,finali,finalj;

    f>>starti>>startj>>finali>>finalj;

    ///aplicare LEE
    Lee(starti,startj);

    cout<<distanta[finali][finalj]-1<<endl;

    ReconstructieTraseu(finali,finalj);
return 0;
}
