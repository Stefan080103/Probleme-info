#include <iostream>
#include <fstream>
using namespace std;
int n;
float x;
float a[101];
void citire(){
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>x;
}
int main()
{
    citire();
    int i,nr=0,nr1=0;
    for(i=1;i<=n;i++)
        if(a[i]==x)
            nr++;
    ofstream g("reale.txt");
    if(nr<3)
        for(i=1;i<=n;i++)
            g<<a[i]<<" ";
    else
        for(i=1;i<=n;i++)
            if(nr1<3)
                if(a[i]!=x)
                    g<<a[i]<<" ";
                else nr1++;
            else g<<a[i]<<" ";
    return 0;
}
