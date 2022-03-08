#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,u,Min,nr;
    ifstream f;
    f.open("f26.txt");
    f>>n;
    f.close();
    Min=10;
    nr=0;
    do{
        u=n%10;
        if(u%2!=0)
            if(u<Min){
                Min=u;
                nr++;
            }
        n=n/10;
    }while(n!=0);
    if(nr==0)
        cout<<"nu exista cifre impare";
    else cout<<Min;
    return 0;
}
