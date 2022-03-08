#include <iostream>
#include <fstream>
using namespace std;
int factori(int a){
    int nr=0,d;
    for(d=2;d<=a;d++)
        if(a%d==0){
            nr++;
            while(a%d==0)
                a=a/d;
        }
    return nr;
}
int divizori(int a){
    int i,nr=0;
    for(i=2;i<=a/2;i++)
        if(a%i==0) nr++;
    return nr;
}
int cifre(int a){
    int nr=0;
    do{
        nr++;
        a=a/10;
    }while(a!=0);
    return nr;
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    cout<<factori(x)<<" "<<divizori(x)<<" "<<cifre(x)<<endl;
    cout<<factori(y)<<" "<<divizori(y)<<" "<<cifre(y)<<endl;
    cout<<factori(z)<<" "<<divizori(z)<<" "<<cifre(z)<<endl;
    return 0;
}
