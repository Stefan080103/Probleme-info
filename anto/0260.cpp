#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,a,nr,u,p;
    cin>>x;
    ofstream g("bac.txt");
    while(x!=0){
        p=0;
        a=x;
        nr=0;
        while(a>0){
            u=a%10;
            if(u%3==0){
                nr++;
                p++;
            }
            a=a/10;
        }
        if(nr>=2)
            g<<x<<" ";
        cin>>x;
    }
    if(p==0) g<<"nu exista";
    g.close();
    return 0;
}
