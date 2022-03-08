#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,i,x,s,nr=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        if(x<0){
            s=s+x;
            nr++;
        }
    }
    ofstream g("bac.txt");
    if(nr==0)
            g<<"nu exista";
    else
            g<<s*1.0/nr;
    g.close();
    return 0;
}
