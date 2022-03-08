#include <fstream>
#include <iostream>
using namespace std;
int n, T[101], D[101];
void reprezentare(){
    ifstream f("arb1.in");
    f>>n;
    int i;
    for(i=1;i<=n;i++)f>>T[i];
    for(i=1;i<=n;i++)f>>D[i];
    f.close();
}
void pre1(int r){
    cout<<r<<' ';
    int i;
    for(i=1;i<=n;i++)
        if(T[i]*D[i]==-r){
            pre1(i);
            break;
        }
        for(i=1;i<=n;i++)
        if(T[i]*D[i]==r){
            pre1(i);
            break;
        }
}
int radacina(){
    for(int i=1;i<=n;i++)
        if(T[i]==0)return i;
    return 0;
}
//a doua implementare
void fii(int x, int &fs, int &fd){
    fs=fd=0;
    for(int i=1;i<=n;i++)
        if(T[i]==x)
            if(D[i]<0)fs=i;
            else fd=i;

}
void pre2(int r){
    int fs, fd;
    cout<<r<<' ';
    fii(r, fs, fd);
    if(fs) pre2(fs);
    if(fd) pre2(fd);
}
void inord(int r){
    int fs,fd;
    fii(r,fs,fd);
    if(fs) inord(fs);
    cout<<r<<' ';
    if(fd) inord(fd);
}
void post(int r){
    int fs,fd;
    fii(r,fs,fd);
    if(fs) post(fs);
    if(fd) post(fd);
      cout<<r<<' ';
}
int main()
{
    reprezentare();
    int R=radacina();
    pre1(R);
    cout<<endl;
    pre2(R);
    cout<<endl;
    inord(R);
    cout<<endl;
    post(R);
    return 0;
}
