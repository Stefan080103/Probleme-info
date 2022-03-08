#include <iostream>
#include <fstream>
using namespace std;
int n,s[101],d[101];
void reprezentare(){
    int i;
    ifstream f("binar2.in");
    f>>n;
    for(i=1;i<=n;i++)
        f>>s[i];
    for(i=1;i<=n;i++)
        f>>d[i];
    f.close();
}
int viz[101];
int radacina(){
    int i;
    for(i=1;i<=n;i++)
        viz[s[i]]=viz[d[i]]=1;
    for(i=1;i<=n;i++)
        if(!viz[i]) return i;
    return 0;
}
/*
int frunze(int r){
    if(r)
        if(s[r]+d[r]==0)
            return 1;
        else return frunze(s[r])+frunze(d[r]);
    else return 0;
}*/
int frunze(int r){
    if(s[r])
        if(d[r])
            return frunze(s[r])+frunze(d[r]);
        else return frunze(s[r]);
    else
        if(d[r])
            return frunze(d[r]);
        else return 1;
}
int main()
{
    reprezentare();
    int rad=radacina();
    cout<<rad;
    cout<<endl;
    cout<<frunze(rad);
    return 0;
}
