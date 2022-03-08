#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,i,x,o,a ,nr=0;
    cin>>n;
    ofstream g("bac.txt");
    for(i=1;i<=n;i++){
        cin>>x;
        a=x;
        o=0;
        while(a>0){
            o=o*10+a%10;
            a=a/10;
        }
        if(o==x){
            g<<o<<" ";
            nr++;
        }
    }
    g.close();
    if(nr==0)
        cout<<"NU EXISTA";
    return 0;
}
