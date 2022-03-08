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
    int i,x;
    ofstream g("sir.txt");
    for(i=n;i>=1;i--)
        if(a[i]!=0){
            x=a[i]*100;
            g<<setprecision(2)<<fixed<<x/100.0<<" ";
        }
    g.close();
    return 0;
}
