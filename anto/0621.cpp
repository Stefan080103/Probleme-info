#include <iostream>
#include <fstream>
using namespace std;
int s[101],d[101],n;
void reprezentare(){
    ifstream f("binar2.in");
    int x,y;
    while(f>>x>>y)
        s[++n]=x , d[n]=y;
    f.close();
}
int tata(int x){
    int i;
    for(i=1;i<=n;i++)
        if(s[i]==x) return i;
        else if(d[i]==x) return i;
    return 0;
}
/*int nivel(int x){
    int nr=0,t=tata(x);
    while(t) nr++, t=tata(t);
    return nr;
}*/
int nivel (int x){
    int t=tata(x);
    if(t==0)
        return 0;
    else return 1+nivel(t);
}
int h(){
    int Max=0,i,niv;
    for(i=1;i<=n;i++)
        if(s[i]+d[i]==0){
            niv=nivel(i);
            if(niv>Max) Max=niv;
        }
    return Max;
}/*
void lantd(int x){
    int t=tata(x);
    if(t==0) cout<<x<<" ";
    else{
        lantd(t);
        cout<<x<<" ";
    }

}*/
void lantd(int x){
    if(x){
        lantd(tata(x));
        cout<<x<<" ";
    }
}
int main()
{
    reprezentare();
    int x;
    cin>>x;
    cout<<h();
    cout<<endl;
    lantd(x);
    return 0;
}
