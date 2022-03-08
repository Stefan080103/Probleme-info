#include <iostream>
#include <fstream>
using namespace std;
int n,s[101],d[101];
void reprezentare(){
    ifstream f("binar2.in");
    f>>n;
    int i;
    for(i=1;i<=n;i++) f>>s[i];
    for(i=1;i<=n;i++) f>>d[i];
    f.close();
}
int viz[101];
int radacina(){
    int i;
    for(i=1;i<=n;i++)
        viz[s[i]]++,viz[d[i]]++;
    for(i=1;i<=n;i++)
        if(viz[i]==0) return i;
    return 0;
}
ofstream g;
//afisare frunze - pre
void frunze(int r){
    if(s[r]+d[r]==0) g<<r<<" ";
    frunze(s[r]);
    frunze(d[r]);
}
int main()
{
    reprezentare();
    int rad=radacina();
    ofstream g("frunze.out");
    frunze(rad);
    g.close();
    return 0;
}
