#include <iostream>
#include <fstream>
using namespace std;
int n,t[101],d[101];
void reprezentare(){
    ifstream f("arb1.in");
    f>>n;
    int i;
    for(i=1;i<=n;i++)
        f>>t[i];
    for(i=1;i<=n;i++)
        f>>d[i];
    f.close();
}
int radacina(){
    int i;
    for(i=1;i<=n;i++)
        if(t[i]==0) return i;
    return 0;
}
void PRE1(int r){
    cout<<r<<" ";
    int i;
    for(i=1;i<=n;i++)
        if(t[i]*d[i]==-r)
        {
           PRE1(i);
           break;

        }
    for(i=1;i<=n;i++)
        if(t[i]*d[i]==r )
        {
           PRE1(i);
           break;

        }
}
void fii(int x,int &fs, int &fd){
    fs=fd=0;
    for(int i=1;i<=n;i++)
        if(t[i]==x)
            if(d[i]<0) fs=i;
            else fd=i;
}
void pre2(int r){
    int fs,fd;
    cout<<r<<" ";
    fii(r,fs,fd);
    if(fs) pre2(fs);
    if(fd) pre2(fd);
}
void inord(int r){
    int fs,fd;
    fii(r,fs,fd);
    if(fs) inord(fs);
    cout<<r<<" ";
    if(fd) inord (fd);
}
int main()
{
    reprezentare();
    int rad=radacina();
    cout<<rad;
    cout<<endl;
    PRE1(rad);
    cout<<endl;
    pre2(rad);
    cout<<endl;
    inord(rad);
    return 0;
}
