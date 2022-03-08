#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int n;
float a[101];
void citire(){
    int i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
}
int main()
{
    citire();
    int i;
    ofstream g("sir.txt");
    for(i=n;i>=1;i--)
        if(a[i]!=0)
            g<<setprecision(2)<<fixed<<a[i]<<" ";
    g.close();
    return 0;
}
