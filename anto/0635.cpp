#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int n;
float a[101];
void citire(){
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
        cin>>a[i];
}

int main()
{
    citire();
    int i;
    ofstream g("sir.txt");
    for(i=1;i<=n;i++)
        if(a[i]==0)
            g<<a[i]<<" ";
    int aux;
    for(i=1;i<=n;i++)
        if(a[i]!=0){
            aux=a[i]*1000;
            g<<aux/1000.0<<" ";
        }
    g.close();
    return 0;
}
