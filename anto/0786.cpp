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
/*void preordine(int r){
    g<<r<<" ";
    if(s[r]) preordine(s[r]);
    if(d[r]) preordine(d[r]);
}*/
void preordine(int r){
    if(r){
        g<<r<<" ";
        preordine(s[r]);
        preordine(d[r]);
    }
}
void inordine(int r){
    if(r){
        inordine(s[r]);
        g<<r<<" ";
        inordine(d[r]);
    }
}
void postordine(int r){
    if(r){
        postordine(s[r]);
        postordine(d[r]);
        g<<r<<" ";
    }
}

int main()
{
    reprezentare();
    int rad=radacina();
    g.open("pre.out");
    preordine(rad);
    g.close();
    g.open("inord.out");
    inordine(rad);
    g.close();
    g.open("post.out");
    postordine(rad);
    g.close();
    return 0;
}
