#include <iostream>
#include <fstream >
using namespace std;
int n,a[191];
void citire(){
    int x;
    cin>>x;
    while(x!=0){
        a[++n]=x;
        cin>>x;
    }
}
int main()
{
    citire();
    int i;
    ofstream g("rez.txt");
    for(i=1;i<=n;i++)
        if(a[i]>=a[n])
            g<<a[i]<<" ";
    g.close();
    return 0;
}
