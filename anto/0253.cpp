#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,s1=0,s2=0,a,u,nr;
    cin>>x;
    ofstream g("bac.txt");
    while(x){
        nr=0;
        a=x;
        while(a){
            u=a%10;
            if(u%2==0)
                s1=s1+u;
            else
                s2=s2+u;
            a=a/10;
        }
        if(s1==s2){
            g<<x<<" ";
            nr++;
        }
        cin>>x;
    }
    g.close();
    if(nr==0)
        cout<<"nu exista";
    return 0;
}
