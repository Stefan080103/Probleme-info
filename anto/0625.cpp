#include <iostream>
#include <fstream>
using namespace std;
int n, a[51][51];
void reprezentare(){
    ifstream f("GO.in");
    f>>n;
    int x,y;
    while(f>>x>>y)
        a[x][y]=1;
    f.close();
}
void grade(int x, int &de,int &di){
    int i;
    de=di=0;
    for(i=1;i<=n;i++){
        de=de+a[x][i];
        di=di+a[i][x];
    }
}
int main()
{
    reprezentare();
    // afisare matrice
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    //
    ofstream g("grade.txt");
    int de,di;
    for(i=1;i<=n;i++)
    {
        grade(i,de,di);
        if(de==di)
            g<<i<<" ";
    }
    g.close();
    return 0;
}
