#include <iostream>
#include <fstream>
using namespace std;
int prim (int x){
    while(x>9) x/=10;
    return x;
}
int main()
{
    int x,p,u,nr=0,a;
    ifstream f("bac.txt");
    f>>x;
    a=prim(x);
    while(f>>x)
        if(x%10==a){
            nr++;
            p=u;
            u=x;
        }
    f.close();
    if(nr==0) cout<<"nu exista ";
    else cout<<p;

}
