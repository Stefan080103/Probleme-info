#include <iostream>
#include <fstream>
using namespace std;



int a[101][101];

ifstream f("listavecini.in");
ofstream g("listavecini.out");

int main(){
    int n,x,y;

    f>>n;

    while(f>>x>>y){
        if(!a[x][y])a[x][0]++,a[y][0]++;
         a[x][y]=1,a[y][x]=1;

    }


    int i,j;

    for(i=1; i<=n; i++){
            g<<a[i][0]<<' ';
        for(j=1; j<=n; j++)
            if(a[i][j])
                g<<j<<' ';
    g<<endl;
    }







return 0;
}
