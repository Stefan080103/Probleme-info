#include <iostream>
#include <fstream>
using namespace std;
int n, a[51][51];
void reprezentare(){
    ifstream f("GO1,in");
    f>>n; int x,y;
    while(f>>x>>y) a[x][y]=1;
    f.close();
}
int intern(int x){
    int i;
    int s=0;
    for(i=1;i<=n;i++)
        s+=a[i][x];
    return s;
}
int di[101];
void cautare(int g){
    int i;
    for(i=1;i<=n;i++)
        if(di[i]==g){
            di[i]=-1;
            break;
        }
}
int main()
{
    reprezentare();
    int i;
    for(i=1;i<=n;i++)
        di[i]=intern(i);
    ifstream f("noduri.txt");
    int nr=0;
    int g;
    while(f>>g){
        nr++;
        cautare(g);
    }
    f.close();
    //

    int s=0;
    for(i=1;i<=n;i++)
        s=s+di[i];
    if(nr==n && s==-n) cout<<"Da";
    else cout<<"NU";
    return 0;
}
