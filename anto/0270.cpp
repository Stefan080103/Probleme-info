#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,nr=0,a;
    cin>>x;
    ofstream g("bac.txt");
    while(x!=0){
        a=x;
        while(a>9 && a%10==a/10%10)
            a=a/10;
        if(a<=9){
            g<<x<<" ";
            nr++;
        }
        cin>>x;
    }
    if(nr==0) g<<"nu exista";
    g.close();
    return 0;
}
