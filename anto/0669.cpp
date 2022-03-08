#include <iostream>
#include <fstream>
using namespace std;
int n, a[191];
void citire(){
    int x;
    cin>>x;
    while(x){
        a[++n]=x;
        cin>>x;
    }
}
int cub(int x){
    int i;
    for(i=1;i<=100;i++)
        if(i*i*i==x)
            return 1;
    return 0;
}
int main()
{
    citire();
    int i,ok=0;
    ofstream g("sir.txt");
    for(i=n;i>=1;i--)
        if(cub(a[i])==0)
            g<<a[i]<<" ";
        else ok=1;
    if(ok==1) unlink("sir.txt");
    return 0;
}
