#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
using namespace std;



ifstream f("bfs.in");
ofstream g("bfs.out");
vector <int> Adj[100001];
int distanta[100001];

int N,M,S;
///citire vector
void citire(int x, int y){

    Adj[x].push_back(y);

}
void Afisare(){
    int i,j;
    for(i=1;i<=N; i++){
        cout<<i<<": ";
        for(j=0; j<Adj[i].size(); j++)
            cout<<Adj[i][j]<<' ';
        cout<<endl;
    }



}


void Bfs(int varf_Start){

    queue <int> Q;

    Q.push(varf_Start);

    distanta[Q.front()]=0;

    while(!Q.empty()){
        int cap=Q.front();
        int i;
        for(i=0; i<Adj[cap].size(); i++)
            if(distanta[Adj[cap][i]]==-1){
               distanta[Adj[cap][i]]=distanta[cap]+1;
                Q.push(Adj[cap][i]);
            }

        Q.pop();

    }




}
int main(){
    f>>N>>M>>S;
    int x,y;
    while(f>>x>>y)
        citire(x,y);

    int i=1;
    for(i=1; i<=N; i++)
        distanta[i]=-1;
    Bfs(S);
    for(i=1; i<=N; i++)
        g<<distanta[i]<<' ';





return 0;
}
