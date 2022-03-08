#include <iostream>
#include <queue>
#include <fstream>
using namespace std;


ifstream f("lee.txt");
int a[100][100], distante[100][100];
int dx[4]={0,1, 0, -1}, dy[4]={1,0,-1, 0};
int n,m;

int InMatrice(int i, int j){

    return i>=1 && i<=n && j>=1 && j<=m;
}
void Lee(int is, int js){

    distante[is][js]=1;

    queue< pair <int, int> > Q;

    Q.push(make_pair(is, js));


    while (!Q.empty()){
         int x=Q.front().first;
         int y=Q.front().second;
        ///parcurgere vecini
        for(int i=0; i<4; i++){

           /// daca se afla in matrice,nu e obstacol si e nevizitat,
            if(InMatrice(x+dx[i],y+dy[i]))
                if(a[x+dx[i]][y+dy[i]]==0)
                      if(distante[x+dx[i]][y+dy[i]]==0){
                           Q.push(make_pair(x+dx[i],y+dy[i]));
                           distante[x+dx[i]][y+dy[i]]=distante[x][y]+1;
                }

        }


        Q.pop();
        }


}
int main(){

    ///citire dimensiune matrice
    int i,j;
    f>>n>>m;

    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            f>>a[i][j];

    ///citire inceput traseu
    int is,js;
    f>>is>>js;

    ///citire sfarsit traseu
    int i_f,j_f;
    f>>i_f>>j_f;


    ///Apelare Lee, pentru a calcula distanta
    Lee(is,js);

    ///Afisare distanta
    //cout<<distante[i_f][j_f]-1;

    /*for(i=1; i<=n; i++, cout<<endl)
        for(j=1; j<=m; j++)
            cout<<distante[i][j];*/
            cout<<distante[i_f][j_f];





return 0;
}
