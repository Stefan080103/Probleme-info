#include <iostream>
#include <fstream>
using namespace std;
short int a[200001];
int main()
{
    short int  n,s,i,j;
    ifstream f("sum2.in");
    f>>n>>s;
    for(i=1;i<=n;i++) {f>>j; a[j]++;}
    f.close();
    int nr=0;
    for(i=1;i<=4;i++) cout<<a[i]<<" ";
    cout<<endl;
    for(i=1;i<=(s-1)/2;i++)
            nr=nr+a[i]*a[s-i];
    ofstream g("sum2.out");
    if(s%2==0) nr=nr+(a[s/2]-1)*(a[s/2])/2;
    g<<nr;
    g.close();
    return 0;
}
